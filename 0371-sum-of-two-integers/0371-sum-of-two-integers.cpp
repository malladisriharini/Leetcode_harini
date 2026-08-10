class Solution {
public:
    int getSum(int a, int b) {
        int ans;
            int carry=(a&b)<<1;   //xor gives  sum without carry
            int sum=a^b;                  // so calculate sum and add carry
           if(carry){
            return getSum(sum,carry);
           }
           return sum;
    }
};