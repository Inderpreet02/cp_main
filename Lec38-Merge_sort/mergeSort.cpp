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

void merge(int *arr, int s, int e){

    int mid = (s + e) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int mainArrayIndex = s;

    for(int i=0; i<len1; i++){
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid + 1;

    for(int i=0; i<len2; i++){
        second[i] = arr[mainArrayIndex++];
    }

    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while(index1 < len1 && index2 < len2){

        if(first[index1] < second[index2]){

            arr[mainArrayIndex++] = first[index1++];
        }else{

            arr[mainArrayIndex++] = second[index2++];
        }
    }

    while (index1 < len1){
        arr[mainArrayIndex++] = first[index1++];
    }

    while(index2 < len2){
        arr[mainArrayIndex++] = second[index2++];
    }
    

}

void mergeSort(int *arr, int s, int e){

    if(s >= e){
        return;
    }

    int mid = s + (e - s)/2;

    mergeSort(arr, 0, mid);

    mergeSort(arr, mid + 1, e);

    merge(arr, s, e);
}

int main(){
    
    int arr[7] = {2, 5, 1, 6 ,9 ,3 ,4};

    int n = 7;

    mergeSort(arr, 0, n-1);

    for(auto x : arr){
        cout << x << " ";
    }
    
    return 0;
}