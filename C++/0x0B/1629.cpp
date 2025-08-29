#include <bits/stdc++.h>
using namespace std;

int A, B, C;

int square(int b){
    if(b==1) return A % C;
    long long val = square(b/2);
    val = (val * val) % C;
    if(b%2!=0) return (val * A) % C;
    return val;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> A >> B >> C;
    
    cout << square(B);
}