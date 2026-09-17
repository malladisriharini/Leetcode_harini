class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        //vertices(v)-->n
        //source(s)-->k

        vector<vector<pair<int,int>>>adj(n+1);
        for(auto t:times){
            int u=t[0];
            int v=t[1];
            int wt=t[2];
            adj[u].push_back({v,wt});
        }

        priority_queue<pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>>>pq;
        vector<int>dist(n+1,1e9);
        dist[k]=0;
        pq.push({0,k});

        while(!pq.empty()){
            int dis=pq.top().first;
            int node=pq.top().second;
            pq.pop();

            for(auto it:adj[node]){
                int adjNode=it.first;
                int edgeWeight=it.second;

                if(dis+edgeWeight < dist[adjNode]){
                    dist[adjNode]=dis+edgeWeight;
                    pq.push({dist[adjNode],adjNode});
                }
            }
        }
      int ans=*max_element(dist.begin()+1,dist.end());
      if(ans==1e9) return -1;
      return ans;
    }
};