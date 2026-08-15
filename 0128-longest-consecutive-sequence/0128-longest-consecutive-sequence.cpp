class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        sort(nums.begin() , nums.end());
        nums.erase(unique(nums.begin() , nums.end()) , nums.end());

        int maxi = 1;
        int count = 1;
        for(int i = 0; i < n-1; i++){
            if(nums[i+1] - nums[i] == 1){
                count++;
            }
            else{
                count = 1;
            }
            maxi = max(count , maxi);
        }
        return maxi;
    }
};