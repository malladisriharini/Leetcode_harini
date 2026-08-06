class Solution {
public:

int product(int n){
    int p=1;
    while(n!=0){
        int r=n%10;
        p*=r;
        n/=10;
    }
    return p;
}
    int smallestNumber(int n, int t) {
        int ans=0;
        for(int i=n;i<=100;i++){
            if((product(i)%t)==0){
                ans=i;
                break;
            }
        }
        return ans;
    }
};