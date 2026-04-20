#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

string s;
ll memo[20][2];

ll count( ll n ){
    s = to_string(n);
    memset(memo,-1,sizeof(memo));

}

int main (){
    int t;
    cin >> t;
    while(t--){
        int l, r;
        cin >> l >> r;
        cout< count(r)-count(l-1);
    }
    return 0;
}