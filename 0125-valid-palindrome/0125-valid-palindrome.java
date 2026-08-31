class Solution {
    public boolean isPalindrome(String s) {
        String res = s.toLowerCase();
        res = res.replaceAll("[^a-z0-9]","");

        String original = res;
        char[] arr = res.toCharArray();
        int low = 0;
        int high = res.length() - 1;
        while(low <= high){
            char temp = arr[high];
            arr[high] = arr[low];
            arr[low] = temp;

            low++;
            high--;
        }
        res = new String(arr);
        return original.equals(res);
    }
}