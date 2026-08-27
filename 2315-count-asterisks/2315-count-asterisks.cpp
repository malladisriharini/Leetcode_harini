class Solution {
public:
    int countAsterisks(string s) {
        stack<int>st;
        int cnt=0;
        for(char c:s){
            if(c=='|'){
                if(st.empty()){
                    st.push('|');
                }
                else{
                         st.pop();
                }
            }
            else if(c=='*' && st.empty()) cnt++;
        }
        return cnt;
    }

};