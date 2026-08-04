class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse = {
            ".-","-...","-.-.","-..",".","..-.","--.","....",
            "..",".---","-.-",".-..","--","-.","---",".--.",
            "--.-",".-.","...","-","..-","...-",".--","-..-",
            "-.--","--.."
        };
unordered_set<string>s;
        for(string w:words){
            string res="";
            for(char c:w){
                res+=morse[c-'a'];
            }
            s.insert(res);
        }
return s.size();
    }
};