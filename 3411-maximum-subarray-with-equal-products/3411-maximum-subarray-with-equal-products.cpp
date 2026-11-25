class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            long long p=1,lcm=1,GCD=0;
            for(int j=i;j<n;j++){
                p*=nums[j];
                if(p>25200) break;
                GCD=gcd(GCD,nums[j]);
                lcm=(lcm/gcd(lcm,nums[j]))*nums[j];
                if(p==lcm*GCD){
                    ans=max(ans,j-i+1);
                }

            }
        }
        return ans;

        
    }
};