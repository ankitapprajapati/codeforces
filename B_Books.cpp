#include<bits/stdc++.h>
using namespace std;

int main (){
    int n, t;
    cin >> n >> t;
    vector<int> a(n);
    for ( int i=0; i<n; i++ ) cin >> a[i];

    int max_books = 0;
    int curr_time = 0;
    int l = 0;

    for( int r=0; r<n; r++ ){
        curr_time += a[r];
        while( curr_time > t ){
            curr_time -= a[l++];
        }
        max_books = max( max_books, r-l+1 );
    }
    cout << max_books << endl;
    return 0;
}
