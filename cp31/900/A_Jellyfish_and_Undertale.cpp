#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        long long a, b, n;
        cin >> a >> b >> n;

        long long ans = b;
        for( int i=0; i<n; i++ ){
            long long x;
            cin >> x;
            if( x<a ) ans+=x;
            else{
                ans+=a-1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}