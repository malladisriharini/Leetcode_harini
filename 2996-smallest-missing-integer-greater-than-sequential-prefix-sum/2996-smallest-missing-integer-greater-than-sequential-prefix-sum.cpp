int maxsum(vector<int>&v){
    int n=v.size();
    if(n==0) return 0;
    int sum=v[0];
    for(int i=1;i<n;i++){
        if(v[i]-v[i-1]==1){
            sum+=v[i];
        }
        else{
            break;
        }
    }
    return sum;
}


class Solution {
public:
    int missingInteger(vector<int>& nums) {
        unordered_map<int,int>f;
        for(int n:nums){
            f[n]++;
        }
        int n=nums.size();
        int ans=maxsum(nums);

        while(f.find(ans)!=f.end()){
            ans++;
        }

        return ans;

    }
};