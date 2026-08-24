vector<bool>sieve(int n){
    vector<bool>isprime(n+1,true);
      isprime[0]=isprime[1]=false;
    for(int i=2;i*i<=n;i++){
        if(isprime[i]){
            for(int j=i*i;j<=n;j+=i){
                isprime[j]=false;
            }
        }
    }
    return isprime;
}


class Solution {
public:
    vector<int> closestPrimes(int left, int right) {

        vector<bool>isprime=sieve(right);
        vector<int>p;
        for(int i=left;i<=right;i++){
            if(isprime[i]){
                p.push_back(i);
    }

        }
        if(p.size()<2) return {-1,-1};
        int a=p[0],b=p[1];
        for(int i=1;i<p.size();i++){
            if(p[i]-p[i-1] < b-a){
                  a=p[i-1];
                  b=p[i];
            }
        } 
        return {a,b};
    }
};