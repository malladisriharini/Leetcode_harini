class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {

        int ans=-1, mincnt=INT_MAX;
          vector<vector<pair<int,int>>>adj(n);

          for(auto e:edges){
                int u=e[0];
                int v=e[1];
                int wt=e[2];
                adj[u].push_back({v,wt});
                adj[v].push_back({u,wt});
          }

          for(int src=0;src<n;src++){

          priority_queue<pair<int,int> , vector<pair<int,int>>, greater<pair<int,int>>>pq;
          vector<int>dist(n,1e9);
          dist[src]=0;
          pq.push({0,src});

          while(!pq.empty()){
            int dis=pq.top().first;
            int node=pq.top().second;
            pq.pop();

            if(dis>dist[node]) continue;

            for(auto it:adj[node]){
                int edgeweight=it.second;
                int adjnode=it.first;

                if(dis+edgeweight < dist[adjnode]){
                    dist[adjnode]=dis+edgeweight;
                    pq.push({dist[adjnode],adjnode});
                }
            }
          }

          int cnt=0;
          for(int i=0;i<n;i++){
            if(i!=src && dist[i]<=distanceThreshold){
                cnt++;
            }
          }

          if(cnt<=mincnt){
            mincnt=cnt;
            ans=src;
          }
          }
          return ans;
        
    }
};