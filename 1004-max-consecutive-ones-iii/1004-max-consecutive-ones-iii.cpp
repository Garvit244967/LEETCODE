class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int left = 0;
        int right = 0;

        int zeroes = 0;
        int maxi = 0;

        while(right < n){
            if(nums[right] == 0){
                zeroes++;
            }
            while(zeroes > k){
                if(nums[left] == 0){
                    zeroes--;
                }
                left++;
            }
            maxi = max(maxi , right - left + 1);
            right++;
        }
        return maxi;
    }
};