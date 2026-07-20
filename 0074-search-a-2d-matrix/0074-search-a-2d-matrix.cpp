class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target){
        int n = matrix.size();
        int m = matrix[0].size();

        for(int rows = 0; rows < n; rows++){
            for(int cols = 0; cols < m; cols++){
                if(matrix[rows][cols] == target) return true;
            }
        }
        return false;
    }
};