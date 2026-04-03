#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const long long INF = 1e18;

int main(){
    int n; 
    cin>>n;
    vector<int> c(n);
    for(int i = 0; i < n; i++) cin >> c[i];
    vector<string> s(n), rev(n);
    for( int i=0; i<n; i++ ){
        cin >> s[i];
        rev[i] = s[i];
        reverse(rev[i].begin(), rev[i].end());
    }

    vector<vector<ll>> dp(n,vector<ll>(2, INF));
    dp[0][0] = 0;
    dp[0][1] = c[0];

    for( int i=1; i<n; i++ ){
        // not reversed 
        if( s[i] >= s[i-1] ) dp[i][0] = min( dp[i][0], dp[i-1][0]);
        if( s[i] >= rev[i-1] ) dp[i][0] = min( dp[i][0], dp[i-1][1]); 
        if( rev[i] >= s[i-1] ) dp[i][1] = min( dp[i][1], dp[i-1][0]+c[i] );
        if( rev[i] >= rev[i-1] ) dp[i][1] = min( dp[i][1], dp[i-1][1]+c[i] );
    }
    ll ans = min(dp[n-1][0], dp[n-1][1]);
    if(ans == INF) cout << -1 << "\n";
    else  cout<< min(dp[n-1][0], dp[n-1][1]) << "\n";
    return 0;
}