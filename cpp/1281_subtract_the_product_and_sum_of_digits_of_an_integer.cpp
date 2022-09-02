// Problem: #1281 Subtract the product and sum of digits of an integer
// URL : https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/

/* 
Description:
Given an integer number n, return the difference between the product of its digits and the sum of its digits.

Example 1:

Input: n = 234
Output: 15 
Explanation: 
Product of digits = 2 * 3 * 4 = 24 
Sum of digits = 2 + 3 + 4 = 9 
Result = 24 - 9 = 15
*/

/*
Asymptotic Analysis:
Time Complexity : O(logN)
Space Complexity : O(1)
 */

class Solution {
public:
    int subtractProductAndSum(int n) {
        long long prod = 1;
        long sum = 0;
        while(n>0)
        {
            int i = n%10;
            prod *=i;
            sum +=i;
            n=n/10;
        }
        return prod-sum;
        
    }
};