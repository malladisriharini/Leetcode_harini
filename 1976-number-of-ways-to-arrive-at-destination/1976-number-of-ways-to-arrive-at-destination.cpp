class Solution {
public:
 int countPaths(int n, vector<vector<int>>& roads) {
 //vertices(v)-->n
    vector<vector<pair<int,int>>>adj(n);
    for(auto r:roads){
        int u=r[0];
        int v=r[1];
        int wt=r[2];
        adj[u].push_back({v,wt});
        adj[v].push_back({u,wt});
    }
    priority_queue<pair<long long,long long>,vector<pair<long long,long long>>,greater<pair<long long,long long>>>pq;
    vector<long long>dist(n,LLONG_MAX);
    vector<long long>ways(n,0);

    dist[0]=0;
    ways[0]=1;
    pq.push({0,0});

    while(!pq.empty()){
        long long dis=pq.top().first;
        int node=pq.top().second;
        pq.pop();

        if(dis>dist[node]) continue;

        for(auto it:adj[node]){
            int adjNode=it.first;
            int edgeWeight=it.second;

        long long newd=dis+edgeWeight;

            if(newd < dist[adjNode]){

                dist[adjNode]=newd;
                ways[adjNode]=ways[node];
                pq.push({newd,adjNode});

            }
            else if(newd==dist[adjNode]){
                  ways[adjNode]=(ways[adjNode]+ways[node])%1000000007;
            }
        }

    }

    return ways[n-1];

        
    }
};