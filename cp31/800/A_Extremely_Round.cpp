#include<bits/stdc++.h>
using namespace std;

const int FULL_SIZE = 1e6;

bool check( int x ){
    int number = 0;
    while( x ){
        int d = x%10;
        if( d!=0 ){
            number++;
            if( number>1 ) return false;
        }
        x /=10;
    }
    return number==1;
}


int main(){
    int t; 
    cin >> t;

    vector<int> h(1e6);
    for( int i=1; i<FULL_SIZE; i++ ){
        if( check(i) ){
            h[i] = h[i-1]+1;
        }
        else{
            h[i] = h[i-1];
        }
    }

    while( t-- ){
        int n;
        cin >> n;
        cout<<h[n]<<endl;
    }
    return 0;
}