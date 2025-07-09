#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);

    stack<int> s;
    int n;
    cin >> n;
    string cmd;

    for(int i=0; i<n; i++){ //while(n--)
        cin >> cmd;
        if(cmd=="push"){
            int num;
            cin >> num;
            s.push(num);
        }
        else if(cmd=="pop"){
            if(s.empty()) cout << -1 << "\n";
            else{
                cout << s.top() << "\n";
                s.pop();
            }
        }   
        else if(cmd=="size"){
            cout << s.size() << "\n";
        }
        else if(cmd=="empty"){
            cout << s.empty() << "\n"; 
        }
        else{ //top
            if(s.empty()) cout << -1 << "\n";
            else cout << s.top() << "\n";
        }
    }
}