#include<bits/stdc++.h>
using namespace std;

int main (){
    int t; 
    cin >> t;
    while( t-- ){
        int n;
        cin >> n;
        bool posible = true;
        for( int i=0; i<n; i++ ){
            int a;
            cin >> a;
            if( a&1 ) posible= !posible;
        }
        if( posible ){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}