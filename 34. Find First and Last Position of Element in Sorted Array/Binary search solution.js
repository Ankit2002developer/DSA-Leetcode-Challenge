/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */

var firstOccurence = function(nums, target) {
    let start = 0;
    let end = nums.length - 1;
    let mid;
    let first = -1;
    while(start <= end) {
        mid = Math.floor(start + (end - start)/2);
        if(nums[mid] === target) {
            first = mid;
            end = mid - 1;
        } else if(nums[mid] > target) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return first;
}

var lastOccurence = function(nums, target) {
    let Start = 0;
    let End = nums.length - 1;
    let Mid;
    let last = -1;
    while(Start <= End) {
        Mid = Math.floor(Start + (End - Start)/2);
        if(nums[Mid] === target) {
            last = Mid;
            Start = Mid + 1;
        } else if(nums[Mid] > target) {
            End = Mid - 1;
        } else {
            Start = Mid + 1;
        }
    }
    return last;
}

var searchRange = function(nums, target) {
    let arr = [];
    arr[0] = firstOccurence(nums, target);
    arr[1] = lastOccurence(nums, target);
    return arr;
};
