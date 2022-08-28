// Problem : https://leetcode.com/problems/intersection-of-multiple-arrays/
/* 
Description:
Given a 2D integer array nums where nums[i] is a non-empty array of distinct positive integers, return the list of integers that are present in each array of nums sorted in ascending order.
Example 1:
Input: nums = [[3,1,2,4,5],[1,2,3,4],[3,4,5,6]]
Output: [3,4]
Explanation: 
The only integers present in each of nums[0] = [3,1,2,4,5], nums[1] = [1,2,3,4], and nums[2] = [3,4,5,6] are 3 and 4, so we return [3,4].

 */


/* Approach 1 : Counting technique
 To return the list of integers present in each array.
 Use a count array of the length of max integer value as per conditions
 Iterate through the 2D-Matrix and increment the index of each integer in counting array
 
 Create a new result vector to list the common integers in each array
 iterate through count array in ascending order and add to list if the value at indexes are matching to total size of 2D-Matrix
 */

/* 
Check for other approaches.
 */


#include <vector>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        int count[1001] = {};
        int m = nums.size();
        int n = nums[0].size();
        for(auto n:nums)
        {
            for(auto i:n)
            {
                ++count[i];
            }
        }
        vector<int> result;
        for(int i=1;i<1001; i++)
        {
            if( m == count[i])
                result.push_back(i);
        }
        return result;
        
    }
};