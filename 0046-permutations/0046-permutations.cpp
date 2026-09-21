class Solution {
public:

void fun(vector<int>& nums,vector<int>&ds,vector<vector<int>>&ans,vector<int>&vis){
          if(ds.size()==nums.size()){
              ans.push_back(ds);
              return ;
          }

for(int i=0;i<nums.size();i++){
         if(vis[i]==0){
            ds.push_back(nums[i]);
            vis[i]=1;
            fun(nums,ds,ans,vis);
            vis[i]=0;
            ds.pop_back();
         }
  }
}
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>ans;
        vector<int>ds;
       vector<int>vis(n,0);
        fun(nums,ds,ans,vis);
        return ans;

    }
};