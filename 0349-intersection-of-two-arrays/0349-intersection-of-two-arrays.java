class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
        int n = nums1.length;
        int m = nums2.length;

        HashSet<Integer> s1 = new HashSet<>();
        for(int n1 : nums1){
            s1.add(n1);
        }
        HashSet<Integer> s2 = new HashSet<>();
        for(int n2 : nums2){
            s2.add(n2);
        }
        HashSet<Integer> s3 = new HashSet<>();
        for(int num : s1){
            if(s2.contains(num)){
                s3.add(num);
            }
        }
        int i = 0;
        int[] result = new int[s3.size()];
        
        for(int num : s3){
            result[i++] = num;
        }
        return result;
    }
}