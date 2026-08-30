class Solution {
    public boolean containsDuplicate(int[] nums) {
        int n = nums.length;
        HashSet<Integer> s1 = new HashSet<>();

        for(int i = 0; i < n; i++){
            s1.add(nums[i]);
        }
        if(n > s1.size()) return true;
        else return false;
    }
}