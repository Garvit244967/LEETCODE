class Solution {
    public boolean isAnagram(String s, String t) {
        // for(int i = 0; i < s.length(); i++){
        //     for(int j = 0; j < t.length(); j++){
        //         if(s.charAt(i) == t.charAt(j)){
        //             return true;
        //         }
        //     }
        // }
        // return false;

        if(s.length() != t.length()){
            return false;
        }
        char[] a = s.toCharArray();
        char[] b = t.toCharArray();

        Arrays.sort(a);
        Arrays.sort(b);

        return Arrays.equals(a,b);
    }
}