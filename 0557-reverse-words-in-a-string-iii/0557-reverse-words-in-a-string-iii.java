class Solution {
    public String reverseWords(String s) {
        String[] words = s.split(" ");

        for(int i = 0; i < words.length; i++){
            char[] arr = words[i].toCharArray();

            int low = 0;
            int high = arr.length - 1;
            while(low < high){
                char temp = arr[low];
                arr[low] = arr[high];
                arr[high] = temp;

                low++;
                high--;
            }
            words[i] = new String(arr);
        }
        return String.join(" " ,words);
    }
}