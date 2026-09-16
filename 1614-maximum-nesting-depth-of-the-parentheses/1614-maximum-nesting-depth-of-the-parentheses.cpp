class Solution {
public:

    int maxDepth(string s) {
       int d=0,maxi=0;
       for(char c:s){
        if(c=='('){
            d++;
            maxi=max(maxi,d);
        }
        else if(c==')') {
            d--;
        }
       }
        return maxi;
    }
};