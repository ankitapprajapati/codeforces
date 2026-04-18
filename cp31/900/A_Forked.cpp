#include<bits/stdc++.h>
using namespace std;

int main (){
    int t; 
    cin >> t;
    while(t--){
        int a,b,xk,yk,xq,yq;
        cin >> a >> b;
        cin >> xk >> yk;
        cin >> xq >> yq;

        set<pair<int,int>> S1, S2;

        vector<pair<int,int>> moves;
        moves.push_back(make_pair(a,b));
        moves.push_back(make_pair(a,-b));
        moves.push_back(make_pair(-a,b));
        moves.push_back(make_pair(-a,-b));
        moves.push_back(make_pair(b,a));
        moves.push_back(make_pair(b,-a));
        moves.push_back(make_pair(-b,a));
        moves.push_back(make_pair(-b,-a));

        for(int i = 0; i < moves.size(); i++){
            int dx = moves[i].first;
            int dy = moves[i].second;
            S1.insert(make_pair(xk + dx, yk + dy));
        }

        for(int i = 0; i < moves.size(); i++){
            int dx = moves[i].first;
            int dy = moves[i].second;
            S2.insert(make_pair(xq + dx, yq + dy));
        }

        int ans = 0;
        for(set<pair<int,int>>::iterator it = S1.begin(); it != S1.end(); it++){
            if(S2.count(*it)) ans++;
        }

        cout << ans << endl;
    }
    return 0;
}