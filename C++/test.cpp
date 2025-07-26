#include <bits/stdc++.h>
using namespace std;

int main(){
    // char c = '2';
    // c = 1+'0';
    // cout << c;

    string s = "abcdef";
    for(char &c : s) c = '1';
    cout << s;
}