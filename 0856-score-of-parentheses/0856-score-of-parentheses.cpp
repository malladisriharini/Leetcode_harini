class Solution {
public:
    int scoreOfParentheses(string s) {
        int bal=0,ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') bal++;
            else {
                bal--;
                if(s[i-1]=='('){
                    ans+=(1<<bal);   // left shift because 2^k
                }
            }
        }
        return ans;
    }
};