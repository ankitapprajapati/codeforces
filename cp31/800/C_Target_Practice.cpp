#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int result =0;
        for( int i=1; i<=10; i++ ){
            for( int j=1; j<=10; j++ ){
                char c;
                cin >> c;
                if( c=='X' ){
                    result += min(min(i,j),min(11-i,11-j));
                }
            }
        }
        cout << result << endl;
    }
    return 0;
}