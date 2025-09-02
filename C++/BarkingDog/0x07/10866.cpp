#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int dat[2*MX+1];
int head = MX, tail = MX;

int empty(){
    if(head == tail) return 1;
    else return 0;
}

int size(){
    return tail-head;
}

void push_front(int x){
    dat[--head] = x;
}

void push_back(int x){
    dat[tail++] = x;
}

void pop_front(){
    head++;
}

void pop_back(){
  tail--;
}

int front(){
    return dat[head];
}

int back(){
    return dat[tail-1];
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    while(n--){
        string cmd;
        cin >> cmd;

        if(cmd == "push_front"){
            int x;
            cin >> x;
            push_front(x);
        }
        else if(cmd == "push_back"){
            int x;
            cin >> x;
            push_back(x);
        }
        else if(cmd == "pop_front"){
            if(empty()) cout << -1 <<"\n";
            else{
                cout << front() << "\n";
                pop_front();
            }
        }
        else if(cmd == "pop_back"){
            if(empty()) cout << -1 <<"\n";
            else{
                cout << back() << "\n";
                pop_back();
            }
        }
        else if(cmd == "size"){
            cout << size() << "\n";
        }
        else if(cmd == "empty"){
            cout << empty() << "\n";
        }
        else if(cmd == "front"){
            if(empty()) cout << -1 <<"\n";
            else cout << front() << "\n";
        }
        else{ //back
            if(empty()) cout << -1 <<"\n";
            else cout << back() << "\n";
        }
    }
}