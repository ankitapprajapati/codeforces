#include<bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cin>> n;
    vector<int> a(n);
    for( int i=0; i<n; i++ ) cin>>a[i];

    // prefix sum approach
    long long sum = 0;
    for( int i=0; i<n; i++ ) sum+=a[i];
    if( sum%3!=0 ) {
        cout<<0<<endl;
        return 0;
    }
    long long target = sum/3;
    long long double_target = 2*target;
    long long count =0;
    long long ways = 0;
    long long prefix_sum = 0;

    for( int i=0; i<n-1; i++){
        prefix_sum+=a[i];
        if( prefix_sum == double_target ) ways += count;
        if( prefix_sum == target ) count++;
        
    }
    cout<<ways<<endl;   
    return 0;
}
