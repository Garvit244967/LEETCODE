class Solution {
    public String reverseStr(String s, int k) {

        char[] arr = s.toCharArray();

        for (int i = 0; i < arr.length; i += 2 * k) {

            int low = i;
            int high = Math.min(i + k - 1, arr.length - 1);

            while (low < high) {
                char temp = arr[low];
                arr[low] = arr[high];
                arr[high] = temp;

                low++;
                high--;
            }
        }

        return new String(arr);
    }
}