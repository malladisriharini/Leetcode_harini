vector<bool>sieve(int n){
    vector<bool>isprime(n+1,true);
    isprime[0]=isprime[1]=false;
    for(int i=2;i*i<=n;i++){
        if(isprime[i]){
            for(int j=i*i;j<=n;j+=i){
                isprime[j]=false;
            }
        }
    }
    return isprime;
}


class Solution {
public:
    int maximumPrimeDifference(vector<int>& nums) {
        vector<int>v;
        int maxi=*max_element(nums.begin(),nums.end());
        vector<bool>isprime=sieve(maxi);
        for(int i=0;i<nums.size();i++){
            if(isprime[nums[i]]){
                v.push_back(i);
            }
        }
        
       return v[v.size()-1]-v[0];
        
    }
};