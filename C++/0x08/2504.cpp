#include <bits/stdc++.h>
using namespace std;

int transInt(char c){
    return c-'0';
}

int main(){
    stack<char> s;
    int result = 0;
    string input;
    cin >> input;

    for(char c : input){
        if(c=='(' || c=='[') s.push(c);
        
    }
}