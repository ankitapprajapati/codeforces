#include<bits/stdc++.h>
using namespace std;


int main(){
    int t; 
    cin >> t;

    while( t-- ){
        int n;
        cin >> n;
        vector<int> a(n);

        int count = 0;

        for( int i=0; i<n; i++ ) {
            cin >> a[i];
            if(a[i]==2) count++;
        }

        if( count==0 ) {
            cout << 1 << endl;

        }
        else if( count&1 ) {
            cout << -1 << endl;
        }
        else{
            count = count>>1 ;
            for( int i=0; i<n; i++ ){
                if(a[i]==2 ){
                    count--;
                    if(count==0 ){
                        cout << i+1 << endl;
                        break;
                    }
                }
            }
        }

    }
    return 0;
}