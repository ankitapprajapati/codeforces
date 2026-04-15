#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin >> t;
    while( t-- ){
        int a,b,c,d;
        cin >> a>>b>>c>>d;

        int y = d-b;
        if( y>=0 && (a+y>=c)) cout<< y+a+y-c<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}