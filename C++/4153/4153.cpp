#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v(3);
    while(1){
        for(int i=0; i<3; i++){
            cin >> v[i];
        }
        if(v[0]==0) break;
        
        sort(v.begin(), v.end());
        if(v[0]*v[0] + v[1]*v[1] == v[2]*v[2]) cout << "right\n";
        else cout << "wrong\n";
    }
}