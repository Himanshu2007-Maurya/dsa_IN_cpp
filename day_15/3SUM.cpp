#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> ans;
    int n = nums.size();

    sort(nums.begin(), nums.end());// Sort the input array in non-decreasing order
    // Iterate through the array, fixing one element at a time and using two pointers to find pairs that sum to the negative of the fixed element
    for (int i = 0; i < n; i++) {

        if (i > 0 && nums[i] == nums[i - 1]) {
            continue;
        }
        // Initialize two pointers, j and k, to find pairs that sum to the negative of nums[i]
        int j = i + 1;
        int k = n - 1;
        // Use a while loop to find pairs that sum to the negative of nums[i]
        while (j < k) {

            int sum = nums[i] + nums[j] + nums[k];

            if (sum < 0) {
                j++;
            }
            else if (sum > 0) {
                k--;
            }// If the sum is zero, we found a triplet that sums to zero, so we add it to the answer vector and move both pointers inward while skipping duplicates
            else {
                vector<int> temp = {
                    nums[i],
                    nums[j],
                    nums[k]
                };

                ans.push_back(temp);// Add the triplet to the answer vector

                j++;
                k--;

                while (j < k && nums[j] == nums[j - 1]) {// Skip duplicates for the second element
                    j++;
                }

                while (j < k && nums[k] == nums[k + 1]) {// Skip duplicates for the third element
                    k--;
                }
            }
        }
    }

    return ans;
}

int main() {

    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    vector<vector<int>> ans = threeSum(nums);

    // Print answer
    for (auto triplet : ans) {
        cout << "[";
         // Print each element of the triplet, separated by commas
        for (int i = 0; i < triplet.size(); i++) {
            cout << triplet[i];

            if (i < triplet.size() - 1) {// If it's not the last element, print a comma
                cout << ",";
            }
        }

        cout << "]" << endl;
    }

    return 0;
}