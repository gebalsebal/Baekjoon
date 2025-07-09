#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int dat[MX];
int pos = 0;

int empty(){
    if(pos==0) return 1;
    else return 0;
}

void push(int x){
    dat[pos++] = x;
}

int pop(){
    if(empty()) return -1;
    else return dat[--pos];
}

int top(){
    if(empty()) return -1;
    else return dat[pos-1];
}

int main(){
    int n;
    cin >> n;
    string cmd;

    for(int i=0; i<n; i++){
        cin >> cmd;
        if(cmd=="push"){
            int num;
            cin >> num;
            push(num);
        }
        else if(cmd=="pop"){
            cout << pop() << "\n";
        }   
        else if(cmd=="size"){
            cout << pos << "\n";
        }
        else if(cmd=="empty"){
            cout << empty() << "\n"; 
        }
        else{ //top
            cout << top() << "\n";
        }
    }
}

