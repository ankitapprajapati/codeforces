#include<bits/stdc++.h>
using namespace std;

int gcd( int a, int b ){
    if( b==0 ) return a;
    return gcd(b,a%b);
}

int main(){
    int t; 
    cin >> t;
    while( t-- ){
        int n;
        cin >> n;
        vector<int> a(n);
        for( int i=0; i<n; i++ ) cin >> a[i];

        bool valid = false;

        for( int i=0; i<n; i++ ){
            for( int j=0; j<n; j++ ){
                if( i!=j && __gcd(a[i],a[j])<=2  ){
                    valid=true;
                    break;
                }
            }
            if(valid ) break;
        }
        if(valid){
            cout << "YES\n" ;
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}