#include <bits/stdc++.h>

using namespace std;

#define ll              long long
#define pb              push_back
#define mp              make_pair
#define ff              first
#define ss              second
#define pii             pair<ll,ll>
#define vi              vector<ll>
#define vt(type)        vector<type>
#define si              set<ll>

vi primes;
bool ar[900000001];

void sieve(){

    ll maxN = 90000000;

    ar[0] = ar[1] = true;

    for(int i=2; i*i<=maxN; i++){
        
        if(!ar[i]){
            for(int j=i*i; j<=maxN; j+=i){
                ar[j] = true;
            }
        }
    }

    for(int i=2; i<=maxN; i++){
        if(!ar[i]){
            primes.pb(i);
        }
    }
}

void solve(){

    ll n;

    cin >> n;

    cout << primes[n-1];
}

int main(){
    
    int t=1;

    cin >> t;

    sieve();

    while(t--){

        solve();
        cout << "\n";
    }
    
    return 0;
}