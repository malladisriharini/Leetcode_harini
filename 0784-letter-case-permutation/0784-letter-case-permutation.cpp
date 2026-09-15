class Solution {
public:
vector<string>ans;
void solve(string &s,int i){
    int n=s.size();
    if(i==n){
        ans.push_back(s);
        return ;
    }
    if(isdigit(s[i])){
        solve(s,i+1);
        return;
    }
    else{
        s[i]=tolower(s[i]);
        solve(s,i+1);

        s[i]=toupper(s[i]);
        solve(s,i+1);

    }
}
    vector<string> letterCasePermutation(string s) {
        ans.clear();
        solve(s,0);
        return ans;
        
    }
};