#include <bits/stdc++.h>
using namespace std;

long long f[100];

long long fibo_Memo(int n){
    long long& ret = f[n];
    if(ret != -1) return ret;
    ret = fibo_Memo(n-1) + fibo_Memo(n-2);
    return ret;

}

long long fibo_Tabul(int n){
    f[1] = f[2] = 1;
    for(int i=3; i<=n; i++) f[i] = f[i-1] + f[i-2];
    return f[n]; 
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    fill(f, f+sizeof(f)/sizeof(long long), -1);
    f[0] = 0;
    f[1] = 1;
    cin >> n;
    printf("%lld", fibo_Tabul(n));
}