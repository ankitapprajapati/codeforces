#include<bits/stdc++.h>
using namespace std;


int main(){
    int t; 
    cin >> t;

    while( t-- ){
        int n;
        cin >> n;
        vector<int> a(n);

        for( int i=0; i<n; i++ ) cin >> a[i];

        sort(a.begin(),a.end(),greater<int>());
        
        if( a[0]==a[n-1] ) {
            cout << "NO\n";
            continue;
        }

        int i=0, j=n-1;
        cout<<"YES\n";

        while( i<j ){
            cout<<a[i]<<" "<<a[j]<<" ";
            i++; j--;
        }
        if( i==j ){
            cout<< a[i] ;
        }
        cout<<endl;

    }
    return 0;
}