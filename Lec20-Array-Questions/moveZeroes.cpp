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

void movezeroes(int arr1[], int arr2[], int n){

    int i = 0;
    int k = 0;
    
    while(i < n){

        if(arr1[i] != 0){
            arr2[k++] = arr1[i++];
        }else{
            i++;
        }
    }
}

int main(){
    
    int arr1[6] = {0, 3, 0 ,1 ,2 ,0};
    
    int arr2[6] = {0};

    movezeroes(arr1, arr2, 6);

    for(auto x: arr2){
        cout << x << " ";
    }
    
    return 0;
}