class Solution {
    public boolean isValid(String word) {
        if(word.length() < 3){
            return false;
        }
        char[] arr = word.toCharArray();
        boolean vowel = false;
        boolean consonants = false;

        for(int i = 0; i < arr.length; i++){
            if(!((arr[i] >= '0' && arr[i] <= '9') ||
                  (arr[i] >= 'a' && arr[i] <= 'z') ||
                  (arr[i] >= 'A' && arr[i] <= 'Z'))){
                    return false;
            }
            if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' ||
                arr[i] == 'o' || arr[i] == 'u' ||
                arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' ||
                arr[i] == 'O' || arr[i] == 'U') {
                vowel = true;
            }
            else if ((arr[i] >= 'a' && arr[i] <= 'z') ||
                     (arr[i] >= 'A' && arr[i] <= 'Z')) {
                consonants = true;
            }
        }
        return vowel && consonants;
    }
}