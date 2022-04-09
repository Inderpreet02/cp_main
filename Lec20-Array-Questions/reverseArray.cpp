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

// Two Pointer start and end

vi reverse(vi v){

    int s = 0;
    int e = v.size()-1;

    while(s<=e){

        swap(v[e], v[s]);
        e--;
        s++;
    }


    return v;
}

int main(){
    
    vi v;

    v.pb(11);
    v.pb(8);
    v.pb(7);
    v.pb(3);
    v.pb(10);
    v.pb(12);
    v.pb(4);

    vi ans = reverse(v);

    for(auto x : ans){

        cout << x << " ";
    }
    
    return 0;
}