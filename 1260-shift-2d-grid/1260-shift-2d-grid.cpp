class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int row=grid.size();
        int col=grid[0].size();
        int tot=row*col;
        vector<vector<int>>ans(row,vector<int>(col));
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                int nr=i,nc=j+k;

                if(nc>=col){
                     nr+=nc/col;
                }

                if(nr>=row){
                    nr%=row;
                }

                nc%=col;

            ans[nr][nc]=grid[i][j];
            }
        }

return ans;
    }
};