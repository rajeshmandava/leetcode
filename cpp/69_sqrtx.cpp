// Problem : #69 sqrt(x)
// URL : https://leetcode.com/problems/sqrtx/

/* 
Description:
Given a non-negative integer x, compute and return the square root of x.

Since the return type is an integer, the decimal digits are truncated, and only the integer part of the result is returned.

Note: You are not allowed to use any built-in exponent function or operator, such as pow(x, 0.5) or x ** 0.5.

Example 1:
Input: x = 4
Output: 2
 */

class Solution {
public:
int mySqrt(int x) {
        long long l = 0, r = x, mid;
        if(x <= 1) return x;
        while(l < r){
            mid = l + (r - l) / 2;
            if(mid * mid <= x)
                l = mid + 1;
            else r = mid ;
        }
        return l-1 ;
    }
};