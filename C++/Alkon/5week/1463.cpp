#include <bits/stdc++.h>
#define f_MAX 1000001
using namespace std;

int arr[f_MAX];

int f(int n){
    for(int i=2; i<=n; i++){
        if(i % 2 ==0) arr[i] = min(arr[i/2]+1, arr[i]);
        if(i % 3 ==0) arr[i] = min(arr[i/3]+1, arr[i]);
        arr[i] = min(arr[i-1]+1, arr[i]);
    }
    return arr[n];
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n;
    fill(arr, arr+f_MAX, f_MAX);
    arr[1] = 0;
    cin >> n;
    cout << f(n);
}