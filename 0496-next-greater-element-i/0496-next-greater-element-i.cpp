class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int> ans;
        for(int i = 0; i < n; i++){
            int j = 0;

            while(j < m && nums2[j] != nums1[i]){
                j++;
            }
            int k = j+1;
            while(k < m && nums2[k] <= nums1[i]){
                k++;
            }
            if(k < m){
                ans.push_back(nums2[k]);
            }
            else{
                ans.push_back(-1);
            }
        }
        return ans;
    }
};