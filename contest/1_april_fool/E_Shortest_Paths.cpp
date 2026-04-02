#include<bits/stdc++.h>
using namespace std;

int main (){
    int n, m;
    cin >> n>> m;
    vector<vector<int>> dist(n+1, vector<int>(n+1, INT_MAX));
    for( int i=0; i<m; i++){
        int u,v,w;
        cin >> u >> v >> w;
        dist[u][v] = w;
        dist[v][u] = w;
    }
    for( int i=1; i<=n; i++ ) dist[i][i] = 0;

    for( int i=1; i<=n; i++ ){
        for( int k=1; k<=n; k++ ){
            for( int j=1; j<=n; j++ ){
                if( dist[i][k]!=INT_MAX && dist[k][j]!=INT_MAX ){
                    dist[i][j] = min( dist[i][j], dist[i][k]+dist[k][j] );
                }
            }
        }
    }
    for( int i=2; i<=n; i++ ){
        if( dist[1][i] == INT_MAX ) cout<<-1<<endl;
        else cout<<dist[1][i]<<endl;
    }
    return 0;


    // int n, m;
    // cin>>n>>m;
    // vector<vector<pair<int,int>>> adj(n+1);
    // for( int i=0; i<m; i++ ){
    //     int u, v, w;
    //     cin >> u >> v >> w;
    //     adj[u].push_back({v,w});
    //     adj[v].push_back({u,w});
    // }
    // vector<long long> dist(n+1,LLONG_MAX);
    // dist[1] = 0;
    // priority_queue<pair<long long,int>, vector<pair<long long,int>>, greater<pair<long long,int>>> pq; // {wt,node}
    // pq.push({0,1});
    // while( !pq.empty() ){
    //     auto curr = pq.top();
    //     pq.pop();
    //     int u = curr.second;
    //     int d = curr.first;
    //     if( d > dist[u]) continue;
    //     for( auto edge : adj[u] ){
    //         int v = edge.first;
    //         int w = edge.second;
    //         if( dist[u]+w < dist[v]  ){
    //             dist[v] = dist[u]+w;
    //             pq.push({dist[v], v});
    //         }
    //     }
    // }
    // for( int i=2; i<=n; i++ ){
    //     if( dist[i] == LLONG_MAX ) cout<<-1<<endl;
    //     else cout<<dist[i]<<endl;
    // }
    // return 0;
}