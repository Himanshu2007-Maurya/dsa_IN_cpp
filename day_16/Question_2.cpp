/*Question 2 : Given a non-empty array of integers nums, every element appears twice 
except for one. Find that single one.
You must implement a solution with a linear runtime complexity and use only
constant extra space. [ Go to Qs ]
Hint - Think XOR. */

#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums) {

    int ans = 0;

    for(int i = 0; i < nums.size(); i++) {
        ans = ans ^ nums[i];
    }

    return ans;
}

int main() {

    vector<int> nums = {4, 1, 2, 1, 2};

    cout << "Single number = " << singleNumber(nums);

    return 0;
}