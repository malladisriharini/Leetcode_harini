

class Solution {
public:
    int countPrimes(int n) {
        if(n<=2) return 0;
    vector<char>isprime(n,1);
    isprime[0]=isprime[1]=0;

    for(int i=2;i*i<n;i++){
        if(isprime[i]){
            for(int j=i*i;j<n;j+=i){
                isprime[j]=0;
            }
        }
    }
        int cnt=0;
        for(int i=2;i<n;i++){
            cnt+=isprime[i];
        }
       return cnt;
    }
};