// #include <iostream>
// using namespace std;

// int main(){
//     int N;
//     int X;
//     int tmp;
//     cin >> N;
//     cin >> X;
//     for(int i=0; i<N; i++){
//         cin >> tmp;
//         if(tmp<X) cout << tmp << " ";
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, x, t;
    cin >> n >> x;
    while(n--){
        cin >> t;
        if(t<x) cout << t << " ";
    }
}