#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t-- ){
        string s;
        cin >> s;
        int cnt1=0, cnt0=0;
        for( char c : s ){
            if( c=='1') cnt1++;
            else cnt0++;
        }
        
        int ans =0;
        for( char c : s  ){
            if( c=='0' ){
                if( cnt1 ){
                    ans++; 
                    cnt1--;
                }
                else break;
            }
            else{
                if( cnt0 ){
                    ans++;
                    cnt0--;
                }
                else break;
            }
        }
        cout<< s.length()-ans << endl;
    }
    return 0;
}