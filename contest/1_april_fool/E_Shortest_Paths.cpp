#include<bits/stdc++.h>
using namespace std;

int main (){
    int n, m;
    cin>>n>>m;
    vector<vector<pair<int,int>>> adj(n+1);
    for( int i=0; i<m; i++ ){
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }

    vector<long long> dist(n+1,LLONG_MAX);
    dist[1] = 0;
    priority_queue<pair<long long,int>, vector<pair<long long,int>>, greater<pair<long long,int>>> pq; // {wt,node}
    pq.push({0,1});

    while( !pq.empty() ){
        auto curr = pq.top();
        pq.pop();

        int u = curr.second;
        int d = curr.first;
        if( d > dist[u]) continue;

        for( auto edge : adj[u] ){
            int v = edge.first;
            int w = edge.second;
            if( dist[u]+w < dist[v]  ){
                dist[v] = dist[u]+w;
                pq.push({dist[v], v});
            }
        }
    }

    for( int i=2; i<=n; i++ ){
        if( dist[i] == LLONG_MAX ) cout<<-1<<endl;
        else cout<<dist[i]<<endl;
    }
    return 0;
}