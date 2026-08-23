string binary(int n){
    string res="";
    for(int i=7;i>=0;i--){
        if(n&(1<<i)) res+='1';
        else res+='0';
    }
    return res;
}


bool flag(string s){
    int l=0,r=s.size()-1;
    while(l<r){
        if(s[l]!=s[r]) return false;

        l++;
        r--;
    }
    return true;
}


class Solution {
public:
    bool isPalindromic(string s) {
string res="";
      for(char c:s){
          res+=binary((int)c);
      }
return flag(res);
        
    }
};