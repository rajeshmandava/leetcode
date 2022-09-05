// problem : 967. Numbers With Same Consecutive Differences
// URL : https://leetcode.com/problems/numbers-with-same-consecutive-differences/

/* 
Description : 
Return all non-negative integers of length n such that the absolute difference between every two consecutive digits is k.

Note that every number in the answer must not have leading zeros. For example, 01 has one leading zero and is invalid.

You may return the answer in any order.

Example 1:
Input: n = 3, k = 7
Output: [181,292,707,818,929]
Explanation: Note that 070 is not a valid number, because it has leading zeroes.
 */

/* 
Time Complexity : 
Space Complexity : 
 */

class Solution {
public:
    vector<int> numsSameConsecDiff(int n, int k) {
        vector<int>ans = {0,1,2,3,4,5,6,7,8,9};
        if(n == 1){
            return ans;
        }
        ans.clear();
        
        for(int i = 1; i <= 9; i++){
            dfs(n , k , i , 0 , i , ans);
        }
        
        return ans;
    }
    
    
    void dfs(int n , int k , int curr , int i , int prev , vector<int>&ans){
        
        if(i == n - 1){
            ans.push_back(curr);
            return;
        }
        
        int next = prev + k;
        
        if(next < 10){
            dfs(n , k , (curr*10)+next , i + 1 , next , ans);
        }
        
        next = prev - k;
        
        if(k != 0 && next >= 0){
            dfs(n , k , (curr *10 ) + next , i + 1 , next , ans);
        }
        
    }
    
};