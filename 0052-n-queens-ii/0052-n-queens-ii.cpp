class Solution {
public:
bitset<30>cl,d1,d2;
void solve(int row,vector<vector<string>>&ds,vector<string>&A,int n){
    if(row==n){
        ds.push_back(A);
        return;
    }
   for(int col=0;col<n;col++){
       if(!cl[col] && !d1[row+col] && !d2[row-col+n-1]){
        A[row][col]='Q';
           cl[col]=d1[row+col]=d2[row-col+n-1]=1;
           solve(row+1,ds,A,n);
           cl[col]=d1[row+col]=d2[row-col+n-1]=0;
           A[row][col]='.';  
       }
   }

}

    int totalNQueens(int n) {
        vector<vector<string>>ds;
        vector<string>A(n,string(n,'.'));

        solve(0,ds,A,n);
        return ds.size();
        
    }
};