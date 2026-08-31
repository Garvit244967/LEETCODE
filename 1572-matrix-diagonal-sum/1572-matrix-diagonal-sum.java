class Solution {
    public int diagonalSum(int[][] mat) {
        int n = mat.length;
        int m = mat[0].length;
        int sum = 0;

        for(int rows = 0; rows < n; rows++){
            for(int cols = 0; cols < m; cols++){
                if(rows == cols){
                    sum += mat[rows][cols];
                }
                if(rows + cols == n-1){
                    sum += mat[rows][cols];
                }
            }
        }
        if(n % 2 == 1){
            sum -= mat[n/2][n/2];
        }
        return sum;
    }
}