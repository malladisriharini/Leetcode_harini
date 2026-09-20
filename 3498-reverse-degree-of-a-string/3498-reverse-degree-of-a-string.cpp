class Solution {
public:
    int reverseDegree(string s) {
        int degree=0;
        for(int i=0;i<s.size();i++){
        char c = tolower(s[i]);
        int rev_value=26-(c-'a');
        degree+=(i+1)*rev_value;

        }
        return degree;
        
    }
};