#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);

    int k, sum = 0;
    cin >> k;
    stack<int> s;

    while(k--){
        int n;
        cin >> n;
        if(n==0) s.pop();
        else s.push(n);   
    }
    int size = s.size();
    for(int i=0; i<size; i++) {
        sum += s.top();
        s.pop();
    }
    cout << sum;
}