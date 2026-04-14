#include<bits/stdc++.h>
using namespace std;

void print1( int n, int val ){
    cout<<"YES\n";
    cout << n << endl;
    for (int i = 0; i < n; i++) cout << val << " ";
    cout << endl;   
    return;
}

int main (){
    int t; 
    cin >> t;
    while( t-- ){
        int n, k, x;
        cin >> n >> k >> x;

        if(k==1 ){
            cout<<"NO\n";
        }else if( x!=1 ){
            print1(n,1);
        }else if(k==2){
            if( n%2==0 ){
                print1(n/2,2);
            }else{
                cout<<"NO\n";
            }
        }else{
            if( n%2==0 ){
                print1(n/2,2);
            }else{
                cout<<"YES\n";
                cout << n/2 << endl;
                for (int i = 0; i < n/2-1; i++) cout << 2 << " ";
                cout << 3 ;
                cout << endl; 
            }
        }
    }
    return 0;
}