class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        int mid;
        int first = -1;
        while(start <= end) {
            mid = start + ((end - start)/2);
            if(nums[mid] == target) {
                first = mid;
                end = mid - 1;
            } else if(nums[mid] > target) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        int Start = 0;
        int End = nums.size() - 1;
        int Mid;
        int last= -1;
        while(Start <= End) {
            Mid = Start + ((End - Start)/2);
            if(nums[Mid] == target) {
                last = Mid;
                Start = Mid + 1;
            } else if(nums[Mid] > target) {
                End = Mid - 1;
            } else {
                Start = Mid + 1;
            }
        }
        vector<int> arr = {first, last};
        return arr;
    }
};
