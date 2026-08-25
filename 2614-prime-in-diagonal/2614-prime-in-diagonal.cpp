bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i * i <= n; i += 2)
        if (n % i == 0) return false;
    return true;
}

class Solution {
public:
    int diagonalPrime(vector<vector<int>>& nums) {
 int n=nums.size();
 int maxprime=0;
 for(int i=0;i<n;i++){
 int dia=nums[i][i];
 int antidia=nums[i][n-i-1];

 if(isPrime(dia)) maxprime=max(maxprime,dia);
 if(isPrime(antidia)) maxprime=max(maxprime,antidia);
 }
 return maxprime;
        
    }
};