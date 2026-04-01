#include<bits/stdc++.h>
using namespace std;

int main (){

    int n;
    cin >>n;
    vector<int> x(n);
    for( int i=0; i<n; i++ ) cin >> x[i];
    int q;
    cin>> q;
    vector<int> m(q);
    for( int i=0; i<q; i++) cin >> m[i];
    
    unordered_map<int,int> mp;
    sort(x.begin(), x.end());

    for( int i=0; i<q; i++ ){
        if( mp.find(m[i])!=mp.end() ){
            cout<< mp[m[i]]<< endl;
            continue;
        }
        int ans = upper_bound(x.begin(), x.end(), m[i])-x.begin();
        cout<< ans<< endl;
        mp[m[i]] = ans;
    }

    return 0;
}