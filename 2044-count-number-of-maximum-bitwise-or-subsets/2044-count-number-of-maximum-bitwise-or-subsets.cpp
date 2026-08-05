class Solution {
public:

int or_operation(vector<int>v){
    int x=0;
    int n=v.size();
    for(int i=0;i<n;i++){
        x|=v[i];
    }
    return x;
}

    int countMaxOrSubsets(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        int maxi=or_operation(nums);

          for(int i=0;i<(1<<n);i++){
            vector<int>sub;
            for(int j=0;j<n;j++){
                if(i&(1<<j)){
                    sub.push_back(nums[j]);
                }
            }
            
            if(or_operation(sub)==maxi){
                cnt++;
            }
          }
          return cnt;

    }
};