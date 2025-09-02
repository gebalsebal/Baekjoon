#include <bits/stdc++.h>
using namespace std;

void move(int a, int b, int n){
    if(n == 1) {
        cout << a << " " << b << "\n";
        return;
        }    
    move(a, 6-a-b, n-1);
    cout << a << " " << b << "\n";
    move(6-a-b, b, n-1);
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);

    int k;
    cin >> k;
    cout << static_cast<long long>(pow(2, k)-1) << "\n";
    move(1, 3, k);
}