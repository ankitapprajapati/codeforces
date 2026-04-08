#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while( t-- ){
        vector<int>v(7);
        for( int i = 0; i < 7; i++ ){
            cin>>v[i];
        }
        sort(v.begin(), v.end());
        int result = 0;
        for( int i = 0; i < 6; i++ ){
            result -= v[i];
        }
        cout << result+v[6] << endl;
    }
    return 0;
}