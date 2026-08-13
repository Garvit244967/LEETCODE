class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> pos;
        vector<int> neg;
        vector<int> result;
        for(int i = 0; i < n; i++){
            if(nums[i] > 0){
                pos.push_back(nums[i]);
            }
            else{
                neg.push_back(nums[i]);
            }
        }
        int p = 0, ne = 0;
        for(int i = 0; i < n; i++) {
            if(i % 2 == 0) {
                result.push_back(pos[p++]);
            }
            else {
                result.push_back(neg[ne++]);
            }
        }
        return result;
    }
};