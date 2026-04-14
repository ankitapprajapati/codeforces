#include<bits/stdc++.h>
using namespace std;

int main (){
    int t; 
    cin >> t;
    while( t-- ){
        int n;
        cin >> n;
        vector<int> a(n);
        for( int i=0; i<n; i++ ) cin >> a[i];

        int ans = INT_MAX;
        for( int i=0; i<n-1; i++ ){
            if( a[i]>a[i+1] ){
                ans =0;
                break;
            }
            else{
                ans = min( ans, (a[i+1]-a[i])/2+1 );
            }
        }
        cout<< ans << endl;
    }
    return 0;
}