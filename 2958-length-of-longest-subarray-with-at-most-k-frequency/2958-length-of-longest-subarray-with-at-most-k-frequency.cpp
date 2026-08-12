class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>f;
        int left=0,ans=0;
        for(int r=0;r<n;r++){
            f[nums[r]]++;

            while(f[nums[r]]>k){
                f[nums[left]]--;
                left++;
            }
            ans=max(ans,r-left+1);
        }
        return ans;
    }
};