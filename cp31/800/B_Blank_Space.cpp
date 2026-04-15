#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin >> t;
    while( t-- ){
        int n;
        cin >> n ;

        int curr=0, ans=0;

        for( int i=0; i<n; i++ ){
            int a;
            cin >> a;
            if( a==0 ){
                curr++;
                ans = max( ans, curr );
            }else{
                curr=0;
            }
        }
        cout << ans << endl;
    }
    return 0;
}