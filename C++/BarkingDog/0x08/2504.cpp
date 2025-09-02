#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);

    stack<char> s;
    int mul = 1, result = 0;
    string input;
    char prev = '\n';
    cin >> input;

    for(char c : input){
        if(c=='(') {
            mul *= 2;
            s.push(c);
        }
        else if(c=='['){
            mul *= 3;
            s.push(c);
        }
        else if(c==')'){
            if(s.empty() || s.top()=='['){
                cout << 0;
                return 0;
            }
            if(prev != ')' && prev != ']') result += mul;
            mul /= 2;
            s.pop();
        }
        else{ // c == ']'
            if(s.empty() || s.top()=='('){
                cout << 0;
                return 0;
            }
            if(prev != ')' && prev != ']') result += mul;
            mul /= 3;
            s.pop();
        }
        prev = c;
    }
    cout << (s.empty() ? result : 0);
}