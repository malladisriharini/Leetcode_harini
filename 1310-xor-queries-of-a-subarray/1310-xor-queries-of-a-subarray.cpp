class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n=arr.size();
        vector<int>ans;
        vector<int>prefix(n+1,0);

        for(int i=0;i<n;i++){
            prefix[i+1]=prefix[i]^arr[i];
        }
        for(auto &i:queries){
            int left=i[0];
            int right=i[1];
            ans.push_back(prefix[right+1] ^ prefix[left]);
        }
        return ans;
    }
};