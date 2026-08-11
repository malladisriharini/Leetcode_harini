class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        sort(nums.begin(),nums.end());
        int ans=1;
        int cnt=1;
        for(int i=1;i<n;i++){
            if(nums[i]-nums[i-1]==1){
                cnt++;
            }
            else if(nums[i]-nums[i-1]==0){

            }
            else{
                cnt=1;
            }
            ans=max(ans,cnt);
        }
        return ans;
    }
};