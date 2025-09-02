#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie();
    ios::sync_with_stdio(0);
    
    int n,t,p;
    int size[6];
    int sum=0;

    cin >> n;
    for(int i=0; i<6; i++) cin >> size[i];
    cin >> t >> p;
    for(int i=0; i<6; i++) sum += (size[i]%t != 0) ? size[i]/t+1 : size[i]/t;
    cout << sum << "\n";
    cout << n/p << " " << n%p;
}

