# =========================================
# REAL ESTATE PRICE PREDICTION ML PROJECT
# =========================================

import os
import pandas as pd
import numpy as np

from sklearn.model_selection import train_test_split
from sklearn.preprocessing import LabelEncoder
from sklearn.ensemble import RandomForestRegressor
from sklearn.metrics import mean_squared_error, r2_score


# =========================================
# 1. AUTO-DETECT DATASET FOLDER
# =========================================
DOWNLOADS_PATH = r"C:/Users/Vipin/Downloads"

DATASET_FOLDER = None
for folder in os.listdir(DOWNLOADS_PATH):
    full_path = os.path.join(DOWNLOADS_PATH, folder)
    if "house" in folder.lower() and os.path.isdir(full_path):
        DATASET_FOLDER = full_path
        break

if DATASET_FOLDER is None:
    raise Exception("Dataset folder not found in Downloads")

print("Using dataset folder:", DATASET_FOLDER)


# =========================================
# 2. LOAD CSV FILE
# =========================================
csv_files = [f for f in os.listdir(DATASET_FOLDER) if f.endswith(".csv")]

if len(csv_files) == 0:
    raise Exception("No CSV file found in dataset folder")

csv_path = os.path.join(DATASET_FOLDER, csv_files[0])
print("Loading:", csv_path)

data = pd.read_csv(csv_path)
print("Total Records:", data.shape)


# =========================================
# 3. IDENTIFY PRICE COLUMN
# =========================================
PRICE_COLUMN = None
for col in data.columns:
    if col.lower() in ["price", "prices", "saleprice", "cost"]:
        PRICE_COLUMN = col
        break

if PRICE_COLUMN is None:
    raise Exception("Price column not found")

print("Using price column:", PRICE_COLUMN)


# =========================================
# 4. DATA CLEANING
# =========================================
data.drop_duplicates(inplace=True)
data.fillna(0, inplace=True)

data[PRICE_COLUMN] = pd.to_numeric(data[PRICE_COLUMN], errors="coerce")
data.dropna(subset=[PRICE_COLUMN], inplace=True)

print("After Cleaning:", data.shape)


# =========================================
# 5. FEATURE & TARGET SPLIT
# =========================================
X = data.drop(PRICE_COLUMN, axis=1)
y = data[PRICE_COLUMN]


# =========================================
# 6. ENCODE CATEGORICAL FEATURES
# =========================================
label_encoders = {}

for col in X.select_dtypes(include=["object"]).columns:
    le = LabelEncoder()
    X[col] = le.fit_transform(X[col])
    label_encoders[col] = le


# =========================================
# 7. TRAIN TEST SPLIT
# =========================================
X_train, X_test, y_train, y_test = train_test_split(
    X, y, test_size=0.2, random_state=42
)


# =========================================
# 8. MODEL TRAINING
# =========================================
model = RandomForestRegressor(
    n_estimators=200,
    random_state=42,
    n_jobs=-1
)

model.fit(X_train, y_train)


# =========================================
# 9. MODEL EVALUATION
# =========================================
y_pred = model.predict(X_test)

rmse = np.sqrt(mean_squared_error(y_test, y_pred))
r2 = r2_score(y_test, y_pred)

print("\nModel Performance")
print("RMSE:", rmse)
print("R2 Score:", r2)


# =========================================
# 10. FEATURE IMPORTANCE
# =========================================
feature_importance = pd.Series(
    model.feature_importances_, index=X.columns
).sort_values(ascending=False)

print("\nFeature Importance:")
print(feature_importance)


# =========================================
# 11. PRICE PREDICTION FUNCTION
# =========================================
def predict_price(input_dict):
    input_data = {}

    for col in X.columns:
        if col in input_dict:
            if col in label_encoders:
                input_data[col] = label_encoders[col].transform([input_dict[col]])[0]
            else:
                input_data[col] = input_dict[col]
        else:
            input_data[col] = 0

    input_df = pd.DataFrame([input_data])
    return model.predict(input_df)[0]


# =========
