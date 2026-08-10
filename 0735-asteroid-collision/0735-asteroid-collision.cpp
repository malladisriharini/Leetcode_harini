class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>s;
        int n=asteroids.size();
        for(int a:asteroids){
            while(!s.empty() && s.top()>0 && a<0){

                if(abs(s.top())<abs(a)){
                    s.pop();
                }

                else if(abs(s.top())==abs(a)){
                    s.pop();
                    a=0;
                    break;
                }

                else{
                    a=0;
                    break;
                }
            }
            if(a!=0) s.push(a);
        }

            vector<int>res(s.size());
            for(int i=s.size()-1;i>=0;i--){
                res[i]=s.top();
                s.pop();
            
        }
        return res;
    }
};