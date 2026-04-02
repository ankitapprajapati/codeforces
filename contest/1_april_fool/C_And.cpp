#include<bits/stdc++.h>
using namespace std;

int median( int a, int b, int c ){
    if( (a>=b && a<=c) || (a>=c && a<=b) ) return a;
    if( (b>=a && b<=c) || b>=c && b<=a ) return b;
    return c;
}

int main (){
    int n;
    cin>>n;
    while(n-- ){
        int a,b,c;
        cin>>a>>b>>c;
        int x = a^b^c;
        int m = median(a,b,c);
        cout<<x-m<<endl;
    }
    return 0;
}