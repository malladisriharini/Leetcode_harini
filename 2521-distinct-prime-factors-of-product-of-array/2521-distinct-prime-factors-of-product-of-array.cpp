bool prime(int n){
    if(n<2) return false;
   for(int i=2;i*i<=n;i++){
    if(n%i==0){
        return false;
    }
   }
   return true;
}


class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
       int n=nums.size();
       set<int>s;
       for(int i=0;i<n;i++){
        for(int j=2;j<=nums[i];j++){
            if(nums[i]%j==0 && prime(j)){
                s.insert(j);
            }
        }
       }
       return s.size();

    }
};