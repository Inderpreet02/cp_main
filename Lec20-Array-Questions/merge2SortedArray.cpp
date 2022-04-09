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

void merge2(int arr1[], int n, int arr2[], int m, int arr3[]){

    int i = 0, j = 0;
    int k = 0;

    while(i < n && j < m){

        if(arr1[i] < arr2[j]){

            arr3[k] = arr1[i];
            i++;
            k++;
        }else{

            arr3[k] = arr2[j];
            j++;
            k++;
        }
    }

    while(i < n){
        arr3[k++] = arr1[i++];
    }
    while(j < m){
        arr3[k++] = arr2[j++];
    }

    return;
}

int main(){
    
    int arr1[5] = {1, 3, 5, 7, 9};

    int arr2[3] = {2, 4, 6};

    int arr3[8] = {0};

    merge2(arr1, 5, arr2, 3, arr3);

    for(auto x: arr3){
        cout << x << " ";
    }
    
    return 0;
}