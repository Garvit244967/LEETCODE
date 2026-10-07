class Solution {
    public List<Integer> findDuplicates(int[] nums) {
        int n = nums.length;
        Arrays.sort(nums);
        ArrayList<Integer> l1 = new ArrayList<>();
        for(int i = 0; i < n-1; i++){
            if(nums[i] == nums[i+1]){
                l1.add(nums[i]);
                i++;
            }
        }
        return l1;
    }
}