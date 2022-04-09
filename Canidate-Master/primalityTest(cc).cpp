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

bool isPrime(ll n){

    if(n == 1){
        return false;
    }

    for(int i=2; i*i<=n; i++){

        if(n % i == 0){
            return false;
        }
    }

    return true;
}

void solve(){

    ll n;

    cin >> n;

    cout << (isPrime(n) ? "yes" : "no");
}

int main(){
    
    int t=1;

    cin >> t;

    while(t--){

        solve();
        cout << "\n";
    }
    
    return 0;
}