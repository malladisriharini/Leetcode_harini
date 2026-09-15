class Solution {
public:
vector<string>ans;
vector<string>fun(string s,int open,int close,int n){
    if(open==n && close==n){    //base case
        ans.push_back(s);
        return ans;
    }

    if(open<n){                        //open case 
        s.push_back('(');
        fun(s,open+1,close,n);
        s.pop_back();
    }

    if(open>close){                      //close case
        s.push_back(')');
        fun(s,open,close+1,n);
        s.pop_back();
    }
return ans;

     
}

vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string s;
       ans=fun(s,0,0,n);
       return ans;
    }
};