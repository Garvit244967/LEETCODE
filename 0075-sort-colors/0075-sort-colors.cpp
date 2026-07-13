class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        vector<int> zeroes;
        vector<int> ones;
        vector<int> twos;
        vector<int> result;

        for(int i = 0; i < n; i++){
            if(nums[i] == 0){
                zeroes.push_back(nums[i]);
            }
            else if(nums[i] == 1){
                ones.push_back(nums[i]);
            }
            else{
                twos.push_back(nums[i]);
            }
        }
        for(int i = 0; i < zeroes.size(); i++){
            result.push_back(zeroes[i]);
        }
        for(int j = 0; j < ones.size(); j++){
            result.push_back(ones[j]);
        }
        for(int k = 0; k < twos.size(); k++){
            result.push_back(twos[k]);
        }
        for(int i = 0; i < n; i++){
            nums[i] = result[i];
        }
    }
};