#include<bits/stdc++.h>
using namespace std;

int main (){
    int n, m;
    cin>>n>>m;
    vector<int> h(n+1);
    for( int i=1; i<=n; i++ ) cin>>h[i];

    vector<vector<int>> adj(n+1);
    for( int i=1; i<n; i++ ){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    queue<pair<int,int>> q;
    vector<bool> visited(n+1,false);
    q.push({1,h[1]});
    visited[1] = true;

    int count =0;
    
    while( !q.empty() ){
        auto curr = q.front();
        q.pop();

        int u = curr.first;
        int curr_h = curr.second;
        if( adj[u].size() == 1 && u!=1 ){
            count++;
            continue;
        }

        for( auto v: adj[u] ){
            int new_h = h[v] ? curr_h+1 : 0;
            if( new_h > m || visited[v] ) continue;
            q.push({v, new_h});
            visited[v] = true;
        }
    }
    cout<<count<<endl;
    return 0;
}