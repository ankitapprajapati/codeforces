#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        long long n,k,x;
        cin >> n >> k >> x;

        if( n==k ){
            if( n*(n+1)/2==x ) {
                cout<< "YES\n";
            }
            else{
                cout<< "NO\n";
            }
            continue;
        }

        long long firstk=k*(k+1)/2, lastk=(n*(n+1)/2) - ((n-k)*(n-k+1)/2);

        if( firstk<=x && lastk>=x ){
            cout<< "YES\n";
        }else{
            cout<< "NO\n";
        }
    }
    return 0;
}