#include<bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >> t;
    while(t-- ){
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for( int i=0; i<n; i++ ) cin >> a[i];

        int ans = a[0];
        for( int i=0; i<n-1; i++ ){
            if( a[i+1] > x ) {
                ans = max( ans, 2*(x-a[i]));
                break;
            }
            else if( a[i+1]==x ){
                ans = max( ans, a[i+1]-a[i] );
                break;
            }
            else{
                ans =max( ans, a[i+1]-a[i] );
            }
        }
        if( x>a[n-1] ) ans = max( ans,2*(x-a[n-1]));
        cout << ans << endl;
    }
    return 0;
}