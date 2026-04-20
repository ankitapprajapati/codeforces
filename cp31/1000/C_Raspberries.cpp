#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main (){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;

        int ans = 5;
        int count =0;

        while(n-- ){
            int a;
            cin >> a;
            
            
            if(k==4){
                if(a%4==0) count +=2;
                else if( a%2==0 ) count++;
            }
            else{
                if( a%k==0 ) count++;
                else ans = min(ans,k-(a%k));
            }

        }
        if( k==4 ) ans = max(0,2-count);
        cout<<ans<<endl;

    }
    return 0;
}