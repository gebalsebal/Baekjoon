#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio;
    cin.tie();

    int n, cnt=0;
    vector<int> primeNum(100);
    cin >> n;
    for(int i=0; i<n; i++) cin >> primeNum[i];
    for(int i=0; i<n; i++){
        if(primeNum[i]==1) continue;
        if(primeNum[i]==2 || primeNum[i]==3) cnt++;
        for(int j=2; j<=int(sqrt(primeNum[i])); j++){
            if(j==primeNum[i]) continue;
            if(primeNum[i]%j==0) break;
            if(j==int(sqrt(primeNum[i]))) cnt++;
        }
    }
    cout << cnt;
}
