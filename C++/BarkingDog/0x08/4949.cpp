#include <bits/stdc++.h>
using namespace std;

int main(){
    string input;
    char dlim = '\n';
    while(1){
        stack<int> s;
        getline(cin, input, dlim);
        if(input[0]=='.') break;
        for(char c : input){
            if(c!='(' && c!=')' && c!='[' && c!=']' && c!='.') continue;
            if(c=='(' || c=='[') {
                s.push(c);
                continue;
            }
            if(c=='.' && s.empty()){
                cout << "yes" << "\n";
                break;
            }
            if(!s.empty() && ((c==')' && s.top() == '(') || (c==']' && s.top() == '['))) 
                s.pop();
            else{
                cout << "no" << "\n";
                break;
            }
        }

    }
    
}