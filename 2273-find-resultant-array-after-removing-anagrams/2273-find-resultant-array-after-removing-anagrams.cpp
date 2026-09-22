class Solution {
public:
bool check(string a,string b){
   if(a.size()!=b.size()) return false;
   sort(a.begin(),a.end());
   sort(b.begin(),b.end());
   return a==b;
    
}
    vector<string> removeAnagrams(vector<string>& words) {
        int i=1;
        while(i<words.size()){
            if(check(words[i],words[i-1])){
                words.erase(words.begin() +i);
            }
            else{
                i++;
            }
        }
        return words;
        
    }
};