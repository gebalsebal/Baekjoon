#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int dat[MX];
int head = 0, tail = 0;

void push(int x){
    dat[tail++] = x;
}

int empty(){
    if(head==tail) return 1;
    else return 0;
}

int pop(){
    if(empty()) return -1;
    else return dat[head++];
}

int front(){
    if(empty()) return -1;
    else return dat[head];
}

int back(){
    if(empty()) return -1;
    else return dat[tail-1];
}

int size(){
    return tail-head;
}


int main(void) {
    int n;
    cin >> n;
    while(n--){
        string cmd;
        cin >> cmd;
        if(cmd == "push"){
            int x;
            cin >> x;
            push(x);
        }
        else if(cmd == "pop"){
            cout << pop() << "\n";
        }
        else if(cmd == "size"){
            cout << size() << "\n";
        }
        else if(cmd == "empty"){
            cout << empty() << "\n";
        }
        else if(cmd == "front"){
            cout << front() << "\n";
        }
        else{ //back
            cout << back() << "\n";
        }
    }
}