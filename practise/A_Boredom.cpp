#include<bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cin>>n;
    vector<int> a(n);
    for( int i=0; i<n; i++ ) cin>>a[i];

    vector<int> freq(100001,0);
    for( int i=0; i<n; i++ ) freq[a[i]]++;

    long long sec_last =0;
    long long last = freq[1]*1;

    for(int i=2;i<100001;i++){
        long long curr = max(last, sec_last + (long long)freq[i]*i);
        sec_last = last;
        last = curr;
    }
    cout<<last<<endl;
    return 0;

}