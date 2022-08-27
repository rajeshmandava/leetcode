# Approach : Binary search 
"""
Search target element in the nums array using binary search technique
Algorithm explanation:
  Lets take left, right and pivot three points in the array
  Left : Always points to the Left of the working array
  Right : Always points to right of the working array
  Pivot : Mid-point of the array 

  Calculate Pivot = left + (right - left) / 2
  Check value at pivot index if it is equal to the target return the index of the target.
  If value at pivot index is greater than target, then change right index to one index before pivot, to concentrate search on left of the array from pivot.
  else, change the left index to just one greater index than pivot and continue searching.

  if the value is not found in the array then the while loop breaks when left value is greater than right, return left value

"""


class Solution(object):
    def searchInsert(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        left =0
        right = len(nums)-1
        pivot =0
        while left <= right:
            pivot = left + (right - left) / 2
            if nums[pivot] == target:
                return pivot
            if target < nums[pivot]:
                right = pivot - 1
            else:
                left = pivot + 1
        return left
        