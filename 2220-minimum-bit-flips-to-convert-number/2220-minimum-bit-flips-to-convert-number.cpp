class Solution {
public:
    int minBitFlips(int start, int goal) {
        int res=start^goal;
        int ans=__builtin_popcount(res);
        return ans;
        
    }
};