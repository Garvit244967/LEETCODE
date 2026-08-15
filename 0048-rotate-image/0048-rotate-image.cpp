class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        for(int rows = 0; rows < n; rows++){
            for(int cols = 0; cols < rows; cols++){
                swap(matrix[rows][cols] , matrix[cols][rows]);
            }
        }
        for(int rows = 0; rows < n; rows++){
            reverse(matrix[rows].begin() , matrix[rows].end());
        }
    }
};