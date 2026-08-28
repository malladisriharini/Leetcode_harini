class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {

        vector<vector<int>>mat(m,vector<int>(n,0));
        for(auto a:indices){
            int r=a[0];
            int c=a[1];

            for(int i=0;i<n;i++){
                mat[r][i]++;
            }
            for(int j=0;j<m;j++){
                mat[j][c]++;
            }
        }

        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]%2==1) ans++;
            }
        }
return ans;


    }
};