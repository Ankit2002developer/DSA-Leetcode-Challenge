class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        int i = 0;
        int j = 0;
        vector<int> arr;
        while(i < m && j < n) {
            if(nums1[i] <= nums2[j]) {
                arr.push_back(nums1[i]);
                i++;
            } else {
                arr.push_back(nums2[j]);
                j++;
            }
        }
        while(i < m) {
            arr.push_back(nums1[i]);
            i++;
        }
        while(j < n) {
            arr.push_back(nums2[j]);
            j++;
        }
        if((m + n) % 2 != 0) {
            return arr[(m + n - 1) / 2];
        } else {
            double first = arr[(m + n)/2];
            double second = arr[(m + n)/2 - 1];
            return (first + second) / 2;
        }
    }
};
