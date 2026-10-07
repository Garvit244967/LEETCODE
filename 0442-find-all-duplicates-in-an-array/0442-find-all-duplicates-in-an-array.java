class Solution {
    public List<Integer> findDuplicates(int[] nums) {
        int n = nums.length;
        HashSet<Integer> s1 = new HashSet<>();
        ArrayList<Integer> result = new ArrayList<>();
        for(int i = 0; i < n; i++){
            if(s1.contains(nums[i])){
                result.add(nums[i]);
            }
            else{
                s1.add(nums[i]);
            }
        }
        return result;
    }
}