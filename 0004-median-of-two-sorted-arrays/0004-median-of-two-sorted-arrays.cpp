class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int> result;

        for(int i = 0; i < n; i++){
            result.push_back(nums1[i]);
        }
        for(int j = 0; j < m; j++){
            result.push_back(nums2[j]);
        }
        int n1 = result.size();
        sort(result.begin() , result.end());
        if(n1 % 2 == 1){
            return result[(n1 - 1) / 2];
        }
        else{
            return (result[n1/2-1] + result[n1/2]) / 2.0;
        }
    }
};