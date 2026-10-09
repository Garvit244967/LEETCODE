class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        // brute force solution

        // int n = nums.size();
        // int count = 0;
        // for(int i = 0; i < n; i++){
        //     int sum = 0;
        //     for(int j = i; j < n; j++){
        //         sum += nums[j];
        //         if(sum == goal) count++;
        //     }
        // }
        // return count;

        // optimal solution

        int n = nums.size();
        unordered_map<int,int> freq;
        freq[0] = 1;

        int sum = 0;
        int count = 0;

        for(int num : nums){
            sum += num;

            if(freq.count(sum - goal)){
                count += freq[sum - goal];
            }
            freq[sum]++;
        }
        return count;
    }
};