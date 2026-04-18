#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n;
        cin >> n;

        int x =0;
        for( int i=0; i<n; i++ ){
            int a ;
            cin >> a;
            x ^= a;
        }

        if( x==0 ){
            cout<<1<<endl;
            cout<<1<<" "<<n<<endl;
        }else if( n%2==0 ){
            cout<<2<<endl;
            cout<<1<<" "<<n<<endl;
            cout<<1<<" "<<n<<endl;
        }else{
            cout<<4<<endl;
            cout<<1<<" "<<n-1<<endl;
            cout<<1<<" "<<n-1<<endl;

            cout<<n-1<<" "<<n<<endl;
            cout<<n-1<<" "<<n<<endl;
        }
    }
    return 0;
}