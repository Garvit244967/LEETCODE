class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        vector<int> zeroes;
        vector<int> nonzeroes;
        vector<int> result;

        for(int i = 0; i < n ; i++){
            if(nums[i] == 0){
                zeroes.push_back(nums[i]);
            }
            else{
                nonzeroes.push_back(nums[i]);
            }
        }
        int index = 0;
        for(int i = 0; i < nonzeroes.size(); i++){
            nums[index++] = nonzeroes[i];
        }
        for(int i = 0; i < zeroes.size(); i++){
            nums[index++] = zeroes[i];
        }
    }
};