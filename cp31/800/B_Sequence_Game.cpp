#include<bits/stdc++.h>
using namespace std;

int main (){
    int t; 
    cin >> t;
    while( t-- ){
        int n; 
        cin >> n;
        vector<int> result;
        for( int i=0; i<n; i++ ){
            int a ;
            cin >> a;
            if( result.size()==0 || result.back()<=a ){
                result.push_back(a);
            }
            else{
                result.push_back(1);
                result.push_back(a);
            }
        }
        cout<< result.size() << endl;
        for( int i=0; i<result.size(); i++ ) cout << result[i] << " "; 
        cout << endl;
    }
    return 0;
}