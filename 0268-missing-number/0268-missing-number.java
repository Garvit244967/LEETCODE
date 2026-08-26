class Solution {
    public int missingNumber(int[] nums) {
        int n = nums.length;
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += nums[i];
        }
        int add = 0;
        for(int i = 0; i < n+1; i++){
            add += i;
        }
        return add - sum;
    }
}