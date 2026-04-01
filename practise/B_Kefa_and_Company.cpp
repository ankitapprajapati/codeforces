#include<bits/stdc++.h>
using namespace std;

bool cmp( pair<int,int> a, pair<int,int> b){
    return a.first<b.first;
}

int main(){
    int n,d;
    cin>>n>>d;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }

    sort(v.begin(),v.end(),cmp);

    int j=0;

    long long max_factor=0, sum=0 ;

    for( int i=0; i<n; i++ ){
        while( v[i].first-v[j].first>=d ){
            sum-=v[j].second;
            j++;
        }
        sum+=v[i].second;
        max_factor=max(max_factor,sum);
    }
    cout<<max_factor<<endl;
    return 0;

}