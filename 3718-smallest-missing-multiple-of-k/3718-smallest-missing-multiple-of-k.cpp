class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
         unordered_set<int>s;
         for(int n:nums){
            if(n%k==0){
                s.insert(n);
            }
         }
         int ans=0;
       for(int i=0;i<1000;i+=k){
          if(i!=0 && s.find(i)==s.end()){
              ans=i;
              break;
          }
       }
      return ans;  
    }
};