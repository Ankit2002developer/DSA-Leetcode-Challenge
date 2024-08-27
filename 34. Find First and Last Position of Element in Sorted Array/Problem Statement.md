# [34. Find First and Last Position of Element in Sorted Array](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/)
<p>
  Given an array of integers <code>nums</code> sorted in non-decreasing order, find the starting and ending position of a given <code>target</code> value.
</p>
<p>
  If <code>target</code> is not found in the array, return <code>[-1, -1]</code>.
</p>
<p>
  You must write an algorithm with <code>O(log n)</code> runtime complexity.
</p>

    Example 1:
    Input: nums = [5,7,7,8,8,10], target = 8
    Output: [3,4]
    
    Example 2:
    Input: nums = [5,7,7,8,8,10], target = 6
    Output: [-1,-1]
    
    Example 3:
    Input: nums = [], target = 0
    Output: [-1,-1]

<p>
  <b>Constraints:</b>
</p>

- <code>0 <= nums.length <= 10<sup>5</sup></code>
- <code>-10<sup>9</sup> <= nums[i] <= 10<sup>9</sup></code>
- <code>nums</code> is a non-decreasing array.
- <code>-10<sup>9</sup> <= target <= 10<sup>9</sup></code>
