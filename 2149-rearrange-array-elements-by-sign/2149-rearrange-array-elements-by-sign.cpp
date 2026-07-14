class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> pos;
        vector<int> neg;

        for(int i = 0; i < n; i++){
            if(nums[i] > 0){
                pos.push_back(nums[i]);
            }
            else{
                neg.push_back(nums[i]);
            }
        }
        vector<int> result(n);
        int l = 0;
        int r = 0;
        for(int i = 0; i < n; i++){
            if(i % 2 == 0){
                result[i] = pos[l++];
            }
            else{
                result[i] = neg[r++];
            }
        }
        return result;
    }
};