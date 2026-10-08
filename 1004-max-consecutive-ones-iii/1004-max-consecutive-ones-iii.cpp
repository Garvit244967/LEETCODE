class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int maxi = 0;
        int zeroes = 0;
        int left = 0;

        for(int i = 0; i < n; i++){
            if(nums[i] == 0){
                zeroes++;
            }
            while(zeroes > k){
                if(nums[left] == 0){
                    zeroes--;
                }
                left++;
            }
            maxi = max(maxi , i-left+1);
        }
        return maxi;
    }
};