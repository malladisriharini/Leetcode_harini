class Solution {
public:
 vector<string>res;

 void fun(string digits,int index,string curr,unordered_map<char,string>&m){
    if(index==digits.size()){
         res.push_back(curr);
        return;
    }

    for(char c:m[digits[index]]){
        fun(digits,index+1,curr+c,m);
    }
}
    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return{};

        unordered_map<char,string>m;
        m['2']="abc";
        m['3']="def";
        m['4']="ghi";
        m['5']="jkl";
        m['6']="mno";
        m['7']="pqrs";
        m['8']="tuv";
        m['9']="wxyz";

        fun(digits,0,"",m);
        return res;

    }
};