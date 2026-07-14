class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        // if array has no elements then no sequence lead to return 0
        if(n == 0) return 0;
        // sorting of an array to find consecutive sequence
        sort(nums.begin() , nums.end());
        // now remove the duplicates to find relevant consecutive sequence
        nums.erase(unique(nums.begin() , nums.end()) , nums.end());
        // counting digits till when difference between adjacent pairs is 1 
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