#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[10];
bool issued[10];

void func(int x){
    if(x==m){
        for(int i=0; i<m; i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }
    for(int i=0; i<n; i++){
        if(!issued[i]){
            arr[x] = i+1;
            issued[i] = true;
            func(x+1);
            issued[i] = false;
        }
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> n >> m;
    func(0);
}