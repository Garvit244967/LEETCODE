class Solution {
    public int[][] flipAndInvertImage(int[][] image) {
        int n = image.length;    // rows
        int m = image[0].length; // cols

        for(int i = 0; i < n; i++){
            int left = 0;
            int right = image[i].length - 1;

            while(left < right){
                int temp = image[i][left];
                image[i][left] = image[i][right];
                image[i][right] = temp;

                left++;
                right--;
            }

            for(int j = 0; j < m; j++){
                if(image[i][j] == 0){
                    image[i][j] = -1;
                }
                else{
                    image[i][j] = -2;
                }
            }
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(image[i][j] == -1){
                    image[i][j] = 1;
                }
                else{
                    image[i][j] = 0;
                }
            }
        }
        return image;
    }
}