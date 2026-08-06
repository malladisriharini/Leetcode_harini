class Solution {
public:

bool beauty(vector<int>v,int k){
    int n=v.size();
   for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(abs(v[i]-v[j])==k){
            return false;
        }
    }
   }
    return true;
}

    int beautifulSubsets(vector<int>& nums, int k) {
        int n=nums.size();
        int cnt=0;
        for(int i=1;i<(1<<n);i++){
            vector<int>sub;
            for(int j=0;j<n;j++){
                if(i&(1<<j)){
                    sub.push_back(nums[j]);
                }
            }
if(beauty(sub,k)){
    cnt++;
}
        }
        return cnt;
    }
};