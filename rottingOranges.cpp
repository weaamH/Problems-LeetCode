class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int time = 0, fresh_oranges = 0, rotten_oranges = 0, row = grid.size(), column = grid[0].size();
        queue<pair<int,int>> q;
        for(int i=0; i<row; i++){
            for(int j=0; j<column; j++){
                if(grid[i][j] == 1) //fresh
                    fresh_oranges += 1;
                if(grid[i][j] == 2) //rotten
                {
                    rotten_oranges += 1;
                    q.push({i,j});
                }
            }
        }
        if(fresh_oranges == 0){
            return 0;
        }
        if(rotten_oranges == 0){
            return -1;
        }
        int count2 = 0;
        while(!q.empty()){
            int i = q.front().first;
            int j = q.front().second;
            q.pop();
            rotten_oranges--;

            if(valid(i+1, j, row, column) && grid[i+1][j] == 1){
                q.push({i+1, j});
                grid[i+1][j] = 2;
                fresh_oranges--;
                count2++;
            }
            if(valid(i-1, j, row, column) && grid[i-1][j] == 1){
                q.push({i-1, j});
                grid[i-1][j] = 2;
                fresh_oranges--;
                count2++;
            }
            if(valid(i, j-1, row, column) && grid[i][j-1] == 1){
                q.push({i, j-1});
                grid[i][j-1] = 2;
                fresh_oranges--;
                count2++;
            }
            if(valid(i, j+1, row, column) && grid[i][j+1] == 1){
                q.push({i, j+1});
                grid[i][j+1] = 2;
                fresh_oranges--;
                count2++;
            }
            if(rotten_oranges == 0){
                time++;
                rotten_oranges = count2;
                count2 = 0;
            }
        }
        if(fresh_oranges == 0){
            return time - 1;
        }
        else{
            return -1;
        }
    }
    bool valid(int i,int j,int rows, int cols){
        if(i<0 || i>=rows || j<0 || j>=cols){
            return false;
        }
        return true;
    }
};