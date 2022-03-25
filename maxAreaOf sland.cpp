class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int max_area = 0, row = grid.size(), column = grid[0].size();
        for(int i=0; i<row; ++i){
            for(int j=0; j<column; ++j){
                max_area = max(max_area, area(grid, i, j));
            }
        }
        return max_area;
    }
    int area(vector<vector<int>>& grid ,int i, int j){
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j]==-1 || grid[i][j]==0 )
            return 0;
        grid[i][j]=-1;
        return 1 + area(grid, i+1, j) + area(grid, i-1, j) + area(grid, i, j+1) + area(grid,  i, j-1);
    }
};