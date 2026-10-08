class Solution {
    public int longestConsecutive(int[] nums) {
        Arrays.sort(nums);
        int n = nums.length;
        if(n == 0) return 0;
        int count = 1;
        int maxi = 1;
        for(int i = 0; i < n-1; i++){
            if(nums[i+1] == nums[i]){
                continue;
            }
            if(nums[i+1] - nums[i] == 1){
                count++;
            }
            else{
                count = 1;
            }
            maxi = Math.max(maxi , count);
        }
        return maxi;
    }
}