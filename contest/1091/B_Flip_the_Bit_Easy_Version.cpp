#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for( int i=0; i<n; i++ ) cin>>a[i];
        int index ;
        cin>>index;
        index--;

        int suf=0, pre=0;


        for( int i=index-1; i>=0; i-- ){
            if( (a[i]!=a[i+1]) && a[i]!=a[index] ) {
                pre++;
            }
        }
        for( int i=index+1; i<n; i++ ){
            if( (a[i]!=a[i-1]) && a[i]!=a[index] ) {
                suf++;
            }
         }
        cout << 2*max(pre,suf)<< "\n";
    }
    return 0;
}