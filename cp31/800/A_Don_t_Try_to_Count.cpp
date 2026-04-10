#include<bits/stdc++.h>
using namespace std;

bool isPresent(string x, string s){
    if( x.length()<s.length() ) return false;
    int n = x.length();
    int m = s.length();
    for( int i=0; i<=n-m; i++ ){
        bool found = true;
        for( int j=0; j<m; j++ ){
            if( x[j+i]!=s[j] ){
                found = false;
                break;
            } 
        }
        if( found ) return true;
    }
    return false;

}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n, m;
        cin >> n >> m;
        string x,s;
        cin >> x >> s;
        int ans =-1;

        for( int i=0; i<=5; i++){
            if( isPresent(x,s)) {
                ans = i;
                break;
            }
            x+=x;
        }
        cout<<ans<<endl;
    }
    return 0;
}