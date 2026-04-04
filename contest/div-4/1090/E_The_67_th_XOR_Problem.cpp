#include<bits/stdc++.h>
using namespace std;

int main(){
     int t;
     cin >> t;

    while( t-- ){
        int n; 
        cin >>n;
        vector<int> v(n);
        for( int i = 0; i < n; i++ )    cin >> v[i];

        int result = 0;
        for( int i = 0; i < n; i++ ){
            for( int j = i+1; j < n; j++ ){
                result = max( result, v[i] ^ v[j] );
            }
        }
        cout << result << endl;
    }
}