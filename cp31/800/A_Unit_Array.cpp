#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin >> t;
    while( t-- ){
        int n;
        cin >> n ;
        
        int sum=0, product=1;
        for( int i=0; i<n; i++ ){
            int a;
            cin >> a;
            sum += a;
            product *= a;
        }

        int result = ( sum>=0 ) ? 0 : abs(sum-1)/2;
        if( product==1 ){
            if( result&1 ) result++ ;
        }else{
            if( result%2==0 ) result++;
        }

        cout<< result<< endl;
    }
    return 0;
}