#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> h(n);
    for( int i=0; i<n; i++ ) cin >> h[i];

    int min_index =0;
    int min_sum = INT_MAX;
    int ans = 0;
    int i;

    for( i=0; i<n; i++ ){
        if( i<k ){
            ans += h[i];
        }
        else{
            if( ans < min_sum ){
                min_sum = ans;
                min_index = i-k;
            }
            ans -= h[i-k];
            ans += h[i];
        }
    }
    if( ans < min_sum ){
        min_sum = ans;
        min_index = i-k;
    }
    cout<< min_index+1;
    return 0;
}
