class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        for(int rows = 0; rows < n; rows++){
            for(int col = 0; col < m; col++){
                if((rows == 0 || mat[rows][col] > mat[rows-1][col]) &&
                (col == 0 || mat[rows][col] > mat[rows][col-1]) &&
                (rows == n-1 || mat[rows][col] > mat[rows+1][col]) &&
                (col == m-1 || mat[rows][col] > mat[rows][col+1])) {
                    return {rows , col};
                }
            }
        }
        return {-1,-1};
    }
};