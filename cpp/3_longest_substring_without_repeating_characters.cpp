// Problem : 3 Longest Substring Without Repeating Characters
// URL : https://leetcode.com/problems/longest-substring-without-repeating-characters/

/* 
Description:
Given a string s, find the length of the longest substring without repeating characters.

Example 1:
Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.

 */

/* 
Time Complexity :
Space Complexity :
 */

class Solution {
public:
  int lengthOfLongestSubstring(string s)
    {
        if (s.length()==0) 
        return 0;

        unordered_map<char,int> mp;


        int len=0;

        for (int right=0, left=0; right<s.length(); ++right)
        {
            if (mp.find(s[right]) != mp.end())
                left = max(left,mp[s[right]]+1);
            
            mp[s[right]] = right;
            len = max(len,right-left+1);
        }
        return len;
    }
};