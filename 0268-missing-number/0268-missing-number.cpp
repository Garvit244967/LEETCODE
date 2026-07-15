class Solution {
public:
    int missingNumber(vector<int>& nums){
        int n = nums.size();
        int sum = 0;
        for(int i = 1; i <= n; i++){
            sum += i;
        }
        int add = 0;
        for(int j = 0; j < n; j++){
            add += nums[j];
        }
        int result = sum - add;
        return result;
    }
};