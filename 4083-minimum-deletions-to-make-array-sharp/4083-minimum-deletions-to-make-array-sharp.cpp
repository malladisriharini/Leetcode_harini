class Solution {
public:
    int minDeletions(vector<int>& nums) {
      int n=nums.size();
     int del=0;
     int pre=nums[0];
     for(int i=1;i<n;i++){
        if(nums[i]==pre){
            del++;

        }
        else{
            pre=nums[i];
        }
     }

    return del;
    }
};