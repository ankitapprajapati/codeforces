#include<bits/stdc++.h>
using namespace std;

int main (){

    int n, k, x;
    cin >> n >> k >> x;
    vector<int> a(n);
    for( int i=0; i<n; i++ ) cin >> a[i];

    if( (n/k) > x ) cout << -1 << endl;

    return 0;
}