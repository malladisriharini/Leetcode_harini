class Solution {
public:

bool check(vector<int>&a,vector<int>&b,long long target){
    long long p1=1,p2=1;
        for(int x:a){
            if(p1>target/x){
                return false;
            }                                    //normal multiplication gives runtime error
            p1*=x;
        }

       for(int x:b){
            if(p2>target/x){
                return false;
            }
            p2*=x;
        }

        return (p1==target && p2==target);
}

    bool checkEqualPartitions(vector<int>& nums, long long target) {
        int n=nums.size();
        vector<vector<int>>all;
        vector<int>masks;                //we need to check disjoint also
        for(int i=1;i<(1<<n);i++){
            vector<int>sub;
            for(int j=0;j<n;j++){
                if(i&(1<<j)){
                    sub.push_back(nums[j]);
                }
            }
            all.push_back(sub);
            masks.push_back(i);

        }
for(int i=0;i<all.size();i++){
    for(int j=i+1;j<all.size();j++){
        if(masks[i] & masks[j]) continue;                   //check disjoint or not. 
        if((masks[i] | masks[j]) !=(1<<n)-1) continue;       // Together they must contain all elements
        if(check(all[i],all[j],target)){
            return true;
        }
    }
}
return false;
        
    }
};