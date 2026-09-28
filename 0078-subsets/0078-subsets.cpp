class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
          vector<vector<int>>res;
        int n=nums.size();
        int totalsets=1<<n;
        for(int mask=0;mask<totalsets;mask++){
            vector<int>subset;
            for(int i=0;i<n;i++){
                if(mask & (1<<i)){
                    subset.push_back(nums[i]);
                }
            }
            res.push_back(subset);
        }
        return res;
    }
};
