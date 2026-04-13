#include<bits/stdc++.h>
using namespace std;

int main (){
    int t; 
    cin >> t;
    while( t-- ){
        int n; 
        cin >> n;
        vector<int> a(n);
        for( int i=0; i<n; i++ ){
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        if( a[0]==a.back() ){
            cout<< -1 << endl;
            continue;
        } 
        
        vector<int> b,c;
        for( int i : a ){
            if( i==a.back() ) c.push_back(i);
            else b.push_back(i);
        }
        cout<<b.size()<< " "<<c.size()<<endl;
        for( int i=0; i<b.size(); i++ ) cout<< b[i] << " ";
        cout<<endl;
        for( int i=0; i<c.size(); i++ ) cout<< c[i] << " ";
        cout<<endl;
    }
    return 0;
}