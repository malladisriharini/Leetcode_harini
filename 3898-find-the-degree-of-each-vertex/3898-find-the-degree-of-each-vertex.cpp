class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int>deg;
       
        for(int i=0;i<m;i++){
             int sum=0;
            for(int j=0;j<n;j++){
                sum+=matrix[i][j];
            }
        
        deg.push_back(sum);
        }
        
        return deg;
    }
};