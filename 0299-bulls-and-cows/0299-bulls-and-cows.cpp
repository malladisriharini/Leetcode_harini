class Solution {
public:
    string getHint(string secret, string guess) {
        int c=0,b=0;
        vector<int>v(10,0),w(10,0);

        for(int i=0;i<secret.size();i++){
            if(secret[i]==guess[i]) b++;
            else{
                v[secret[i]-'0']++;
                w[guess[i]-'0']++;
            }
        } 
        for(int i=0;i<10;i++){
            c+=min(v[i],w[i]);
        }  

        return to_string(b)+"A"+to_string(c)+"B";     
    }
};