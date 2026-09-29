class Solution {
public:
bool solve(int i,int j,int balance,int n,int m, vector<vector<char>>&grid,vector<vector<vector<int>>>&dp) {

    if(grid[i][j]=='(') balance++;
    else balance--;

    if(balance<0) return false;
    if(dp[i][j][balance]!=-1) return dp[i][j][balance];

    if(i==n-1 && j==m-1) {
        return balance==0;
    }

   bool ans=false;

    if(i+1<n){
       ans|=solve(i+1,j,balance,n,m,grid,dp);

    }
    if(j+1<m){
       ans|=solve(i,j+1,balance,n,m,grid,dp);
    }
    return dp[i][j][balance]=ans;

}
    bool hasValidPath(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        if(grid[0][0]==')' || grid[n-1][m-1]=='(') return false;
        int len=n+m-1;
        if(len%2!=0) return false;
        vector<vector<vector<int>>> dp(n,vector<vector<int>>(m,vector<int>(len + 1, -1)));

        bool ans=solve(0,0,0,n,m,grid,dp);
        return ans;
        
    }
};