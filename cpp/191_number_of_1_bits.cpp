// Problem : 191 Number of 1 Bits
// URL : https://leetcode.com/problems/number-of-1-bits/

/* 
Description :
Write a function that takes an unsigned integer and returns the number of '1' bits it has (also known as the Hamming weight).

Exmaple 1:

Input: n = 00000000000000000000000000001011
Output: 3
Explanation: The input binary string 00000000000000000000000000001011 has a total of three '1' bits.


Constraints:

The input must be a binary string of length 32.
 */

/* 
Asymptotic Analysis:

Time Complexity : O(1)
Space Complexity : O(1)

 */

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count =0;
        while(n>0){
            if(n&1==1)
                count++;
            n>>=1;
        }
        return count;
        
    }
};