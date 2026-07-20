class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat){
        int n = mat.size();
        int m = mat[0].size();
        int maxi = 0;
        int index = 0;
        for(int rows = 0; rows < n; rows++){
            int count = 0;
            for(int col = 0; col < m; col++){
                if(mat[rows][col] == 1){
                    count++;
                }
            }
            if(count > maxi){
                maxi = count;
                index = rows;
            }
        }
        return {index,maxi};
    }
};