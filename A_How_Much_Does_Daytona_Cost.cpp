#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t ;
    while( t-- ){
        int n, k;
        cin >> n >> k;
        bool find = false;
        for( int i=0; i<n; i++ ){
            int a;
            cin >> a;
            if( a==k ) find = true;
        }
        if(find) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}