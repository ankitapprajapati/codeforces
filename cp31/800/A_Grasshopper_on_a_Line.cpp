#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin >> t;
    while( t-- ){
        int n;
        cin >> n ;
        if( x%k !=0 ){
            cout << 1 << endl << x << endl;
        }
        else{
            cout << 2 << endl << x-1 << " " << 1 << endl;
        }
    }
    return 0;
}