#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;

        int n = x + y;

        if ( x>y || y==0 || (n%2==0 && x==0) ) {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";

        int root =1;
        while( x>0 ){
            cout << root << " " << root+1 << "\n";
            root++;
            cout << root << " " << root+1 << "\n";
            root++;
            x--;
            y--;
        }
        while( y>0 ){
            cout << root << " " << root+y << "\n";
            y--;
        }
    }

    return 0;
}