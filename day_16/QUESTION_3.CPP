/*
Question 3 : You are given a 0-indexed integer array nums.
The effective value of three indices i, j, and k is defined as ((nums[i] | nums[j]) & 
nums[k]).
The xor-beauty of the array is the XORing of the effective values of all the possible triplets 
of indices (i, j, k) where 0 <= i, j, k < n.
Return the xor-beauty of nums. [ Go to Qs ]
*/

#include <iostream>
#include <vector>
using namespace std;

int xorBeauty(vector<int>& nums) {
    int ans = 0;

    for (int num : nums) {
        ans = ans ^ num;
    }

    return ans;
}

int main() {

    vector<int> nums = {1, 4};

    cout << "XOR Beauty = " << xorBeauty(nums);

    return 0;
}