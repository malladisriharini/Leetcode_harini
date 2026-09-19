class Solution {
public:

int bfs(int row,int col,vector<vector<int>>&vis,vector<vector<int>>&grid){
    int n=grid.size();
    int m=grid[0].size();

    vis[row][col]=1;
    queue<pair<int,int>>q;
    q.push({row,col});
     int area=0;

    while(!q.empty()){
        int row=q.front().first;
        int col=q.front().second;

        q.pop();

        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};
        area++;

        for(int i=0;i<4;i++){
             int nrow=row+delrow[i];
             int ncol=col+delcol[i];

        if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && grid[nrow][ncol]==1){
                vis[nrow][ncol]=1;
                q.push({nrow,ncol});
        }
    }
    }
    return area;

}
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int row=0;row<n;row++){
            for(int col=0;col<m;col++){

                 if(!vis[row][col] && grid[row][col]==1){

                          int area=bfs(row,col,vis,grid);
                          ans=max(area,ans);

            }
        }
        }
        return ans;
    }
};