#include <bits/stdc++.h> 
using namespace std;

int main (){
    int t;
    cin >> t;
    while( t-- ){
        int n;
        cin >> n;
        string s;
        cin>>s;
        
        int ans = 0, count=0;
        for( int i=0; i<n; i++ ){
            char c = s[i];
            if( c=='.' ){
                count++;
                if( count == 3 ){
                    ans = 2;
                    break;
                }
                else{
                    ans++;
                }
            }
            else{
                count = 0;
            }
        }
        cout << ans << endl;
    }
    return 0;
}