#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t;
    cin>>t;

    // make dp of prime numbers and store them in vector
    vector<bool> is_prime(10000000, true);
    is_prime[0] = is_prime[1] = false;
    for( int i=2; i*i<= 10000000; i++ ){
        if( is_prime[i] ){
            for( int j=i*i; j<=10000000; j+=i ){
                is_prime[j] = false;
            }
        }
    }
    vector<int> primes;
    for( int i=2; i<=10000000; i++ ){
        if( is_prime[i] ){
            primes.push_back(i);
        }
    }

    while( t-- ){
        int n;
        cin>>n;
        cout<< 1 << " " <<2 << " ";
        for( int i=3; i<=n; i++ ){
            cout << 1ll*primes[i-2]*primes[i-3] << " " ; 
        }
        cout << endl;
    }
    return 0;
}