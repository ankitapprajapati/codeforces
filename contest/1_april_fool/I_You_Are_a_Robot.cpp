#include<bits/stdc++.h> 
using namespace std;

int main(){
    int t; 
    cin >> t;
    while(t--){
        int n; 
        cin >> n;
        vector<int> a(n+1,0);

        for( int i=1; i<=n-1; i++ ){
            int x;
            cin >> x ;
            a[x]++;
        }
        for( int i=1; i<=n-1; i++ ){
            int y ;
            cin >> y ;
        }
        for( int i=1; i<=n ;i++ ){
            if( a[i] ==0 ){
                cout<< i<< endl;
                break;
            }
        }
    }
    return 0;
}