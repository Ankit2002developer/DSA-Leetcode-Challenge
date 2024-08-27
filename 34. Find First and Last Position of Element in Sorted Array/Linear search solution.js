/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var searchRange = function(nums, target) {
    let first = -1;
    for(let i = 0; i < nums.length; i++) {
        if(nums[i] === target) {
            first = i;
            break;
        }
    }
    let last = -1;
    for(let j = (nums.length - 1); j >= 0; j--) {
        if(nums[j] === target) {
            last = j;
            break;
        }
    }
    let arr = [];
    arr[0] = first;
    arr[1] = last;
    return arr;
};
