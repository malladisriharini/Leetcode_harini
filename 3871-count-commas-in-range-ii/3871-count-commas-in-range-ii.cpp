class Solution {
public:
    long long countCommas(long long n) {
        string s=to_string(n);
        int x=s.size();
        long long res=0;
        long long b=1000;
        if(x<4){
            res=0;

        }
        else{
            while(b<=n){
            res+=abs(b-n)+1;
            b*=1000;
        }
        }
        return res;
    }
};