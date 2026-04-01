#include<bits/stdc++.h>
using namespace std;

int helper(int n, int a, int b, int c, vector<int>& dp){
    if( n==0 ) return 0;
    if( n<0 ) return -1;

    if( dp[n]!=-2 ) return dp[n];
    
    int res = max( helper(n-a, a, b, c,dp), max(helper(n-b, a, b, c,dp), helper(n-c, a, b, c,dp)) );
    if( res==-1 ) return dp[n] = -1;
    return dp[n]= res+1;
}

int main(){
    int n, a, b, c;
    cin>>n>>a>>b>>c;

    vector<int> dp(n+1,-2);

    cout<<helper(n, a, b, c,dp)<<endl;
    return 0;
}