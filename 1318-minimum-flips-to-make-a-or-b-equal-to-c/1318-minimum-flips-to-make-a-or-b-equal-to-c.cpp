class Solution {
public:
    int minFlips(int a, int b, int c) {
        bitset<64>b1(a);
        bitset<64>b2(b);
        bitset<64>b3(c);
        int count=0;

        for(int i=0;i<64;i++){
            if((b1[i]|b2[i])!=b3[i]){
               if(b3[i]==1){
                count+=1;
               }
               else{
                if(b1[i]==1) count++;
                if(b2[i]==1) count++;
               }
            
            }
        }
        return count;
        
    }
};