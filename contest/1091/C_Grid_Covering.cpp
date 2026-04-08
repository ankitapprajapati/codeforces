#include<bits/stdc++.h>
using namespace std;

int gcd( int a, int b){
    if( b==0 ) return a;
    return gcd( b, a%b );
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n, m, a,b;
        cin>> n >> m >> a >> b;

        if( gcd(n,m)<=2 && gcd(a,n)==1 && gcd(b,m)==1 ) {
            cout<< "YES"<< endl;
            continue;
        }
        cout<< "NO"<< endl;
    }
    return 0;
}