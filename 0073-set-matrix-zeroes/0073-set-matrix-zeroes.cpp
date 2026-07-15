class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        vector<int> row(n,0) , col(m,0);
        for(int rows = 0; rows < n; rows++){
            for(int cols = 0; cols < m; cols++){
                if(matrix[rows][cols] == 0){
                    row[rows] = -1;
                    col[cols] = -1;
                }
            }
        }
        for(int rows = 0; rows < n; rows++){
            for(int cols = 0; cols < m; cols++){
                if(row[rows] == -1 || col[cols] == -1){
                    matrix[rows][cols] = 0;
                }
            }
        }
    }
};