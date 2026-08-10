class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
     unordered_map<int,int>freq;
        vector<int>ans;
        for(int n:nums){
            freq[n]++;
        }
        for(auto &p:freq){
            if(p.second==1){
                ans.push_back(p.first);
            }
        }
        return ans;
        

         /*int res=0;
        for(int i=0;i<nums.size();i++){
            res^=nums[i];
        }
        int k=0,x=1;

        while(true){
            if((res & x)>0){
                break;
            }
            k++;
            x=x<<1;
        }
        int res1=0,res2=0;

        for(int i=0;i<nums.size();i++){
            if((nums[i] & (1<<k))){
                res1=res1^nums[i];
            }
            else{
                res2=res2^nums[i];
            }
        }
        return {res1,res2};
        */
        
    }
};