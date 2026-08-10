class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int OR=0;
        for(int n:nums){
            OR |=n;
        }  
        return (OR * (1<<(nums.size()-1)));
    }
};