class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        vector<int> zeroes;
        vector<int> others;
        vector<int> result;

        for(int i = 0; i < n; i++){
            if(nums[i] == 0){
                zeroes.push_back(nums[i]);
            }
            else{
                others.push_back(nums[i]);
            }
        }

        for(int i = 0; i < others.size(); i++){
            result.push_back(others[i]);
        }
        for(int i = 0; i < zeroes.size(); i++){
            result.push_back(zeroes[i]);
        }
        nums = result;
    }
};