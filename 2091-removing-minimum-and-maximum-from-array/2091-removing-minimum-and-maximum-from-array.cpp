class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        vector<int>v;
        if(n==1) return 1;
        int x=max_element(nums.begin(),nums.end())-nums.begin();
        int y=min_element(nums.begin(),nums.end())-nums.begin();

        int a=max(x,y)+1;
        int b=max((n-x-1),(n-y-1))+1;
        int c1=x+1+(n-y-1)+1;
        int c2=y+1+(n-x-1)+1;
        int c=min(c1,c2);

     v.push_back(a),v.push_back(b),v.push_back(c);
     return *min_element(v.begin(),v.end());

        
    }
};