class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merged;
        int n = nums1.size();
        int m = nums2.size();
        for(int i = 0; i < n; i++){
            merged.push_back(nums1[i]);
        }
        for(int i = 0; i < m; i++){
            merged.push_back(nums2[i]);
        }
        sort(merged.begin() , merged.end());
        int size = merged.size();
        int mid = size / 2;
        if(size % 2 == 1){
            return merged[mid];
        }
        else{
            return (merged[mid-1] + merged[mid]) / 2.0;
        }
    }
};