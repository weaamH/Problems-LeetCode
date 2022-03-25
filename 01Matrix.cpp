class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        if(mat.empty()){
            return {};
        }
        int row = mat.size(), column = mat[0].size();
        vector<vector<int>> result(row, vector<int>(column, INT_MAX-1));
        for(int i=0; i<row; ++i){
            for(int j=0; j<column; ++j){
                if(mat[i][j] == 0){
                     result[i][j] = 0;
                }
                else{
                    if(j > 0){
                        result[i][j] = min(result[i][j], result[i][j-1] + 1);
                    }
                    if(i > 0){
                        result[i][j] = min(result[i][j], result[i-1][j] + 1);
                    }
                }
            }
        }
        for(int i=row-1; i>=0; --i){
            for(int j=column-1; j>=0; --j){
                if(j < column-1){
                    result[i][j] = min(result[i][j], result[i][j+1] + 1);
                }
                if(i < row-1){
                    result[i][j] = min(result[i][j], result[i+1][j] + 1);
                }
            }
        }
        return result;
    }
};