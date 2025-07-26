#include <bits/stdc++.h>
using namespace std;

int main(){
    int sum = 0; 
    stack<char> s;
    string sticks;
    char pre = ' ';

    cin >> sticks;
    for(char c : sticks){
        if(c=='(') {
            s.push(c);
            sum++;
        }
        else { //c==')'
            if(pre == '('){
                sum--;
                s.pop();
                sum += s.size();
            }
            else s.pop();
        }
        pre = c;
    }
    cout << sum;
}