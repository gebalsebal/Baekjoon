#include <bits/stdc++.h>
using namespace std;

int transInt(char c){
    return c-'0';
}

int lastSum(stack<char>& s){
    int sum = 0;
    while(!s.empty()){
        char tmp = s.top();
        if(tmp=='(' || tmp==')' || tmp=='[' || tmp ==']') return 0;
        else {
            sum += transInt(s.top());
            s.pop();
        }
    }
    return sum;
}

int main(){
    stack<char> s;
    string input;
    cin >> input;

    for(char c : input){
        int tmp=0;
        if(c=='(' || c=='[') s.push(c);
        else if(c==')'){
            while(!s.empty() && s.top() != '('){
                if(s.top() == ')' || s.top() == ']' || s.top() == '[') {
                    cout << 0;
                    return 0;
                }
                tmp += transInt(s.top());
                s.pop();
            }
            if(s.empty()){
                cout << 0;
                return 0;
            }
            s.pop();
            s.push(tmp==0 ? '2' : tmp*2 + '0');
        }
        else if(c==']'){
            while(!s.empty() && s.top() != '['){
                if(s.top() == ')' || s.top() == ']' || s.top() == '(') {
                    cout << 0;
                    return 0;
                }
                tmp += transInt(s.top());
                s.pop();
            }
            if(s.empty()){
                cout << 0;
                return 0;
            }
            s.pop();
            s.push(tmp==0 ? '3' : tmp*3 + '0');
        }
    }
    cout << lastSum(s);
    
}