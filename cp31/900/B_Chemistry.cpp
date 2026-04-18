#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin >> t;
    while(t-- ){
        int n, k;
        cin >> n >> k;
        vector<int> freq(26,0);
        for( int i=0; i<n; i++ ){
            char c ;
            cin >> c;
            freq[c-'a']++;
        }

        int oddCount = 0;
        for( int i=0; i<26; i++ ){
            if( freq[i]&1 ) oddCount++;
        }

        if( oddCount<=k+1 ){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}