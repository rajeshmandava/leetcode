// Problem : 53. Maximum Subarray
// URL : https://leetcode.com/problems/maximum-subarray/

/* 
Description:

Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

A subarray is a contiguous part of an array.

Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.

Example 2:

Input: nums = [1]
Output: 1
 */

/* 

Best Approach:

Kadane's algorithm:

Time Complexity : O(n)
Space Complexity : O(1)
 */

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int max_so_far = INT_MIN;
        for(auto n:nums){
            sum +=n;
            max_so_far = max(max_so_far, sum);
            if(sum<0){
                sum = 0;
            }
        }
        return max_so_far;
        
    }
};