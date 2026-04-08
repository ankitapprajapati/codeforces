#include<bits/stdc++.h>
using namespace std;

int main (){
    int k;
    cin >> k;
    while( k-- ){
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for( int i=0; i<n; i++ ) {
            cin >> a[i];
        }
        
        int acc = accumulate(a.begin(), a.end(),0);
        if( acc&1 || (n*k)%2==0  ) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}