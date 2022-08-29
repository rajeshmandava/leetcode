// Problem :https://leetcode.com/problems/find-smallest-common-element-in-all-rows/
/* 
Problem Description: 
Given an m x n matrix mat where every row is sorted in strictly increasing order, return the smallest common element in all rows.

If there is no common element, return -1.
 */


// Approach : Counting numbers
/* 
  As given: Array is sorted and strictly increasing order. Meaning no repeating element in the array. So, every element in a row array is uniqe
  Use a counting array to count number of occurences in each row array.
  Check counting array which least value is equal to size of all row arrays.
 */
class Solution {
public:
    int smallestCommonElement(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int size = m*n;
        int count[10001] ={};
        for(int i=0; i < m; i++){
            for(int j = 0; j<n; j++){
                ++count[mat[i][j]];
            }
        }
        for(int i = 0; i < 10001; i++){
            // std::cout<<count[i]<<" "<<m<<std::endl;
            if(count[i] == m)
                return i;
        }
        return -1;
    }
};

// Hashing approach using map

class Solution {
public:
    int smallestCommonElement(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
    
        std::map<int,int> count={};
        for(int i=0; i < m; i++){
            for(int j = 0; j<n; j++){
            count[mat[i][j]]++;    
            }
        }
        for(auto it=count.begin(); it!=count.end();it++){
            
            if(m == it->second)
                return it->first;
        }
        return -1;
    }
};