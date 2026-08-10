class Solution {
public:
    int singleNumber(vector<int>& nums) {
       unordered_map<int,int>freq;
        int ans=0;
        for(int n:nums){
            freq[n]++;
        }
        for(auto &p:freq){
            if(p.second==1){
                ans=p.first;
            }
        }
        return ans;
        


       
    }
};