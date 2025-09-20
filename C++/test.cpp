#include <bits/stdc++.h>
using namespace std;

int main(){
    // char c = '2';
    // c = 1+'0';
    // cout << c;

    // string s = "abcdef";
    // for(char &c : s) c = '1';
    // cout << s;

    // int test[10][10] = {{1,2,3},{4,5,6}};
    // cout << test[0][0] << " " << test[9][9];

    // for(int i=0; i<4; i++){
    //     for(int j=0; j<4; j++){
    //         int tmp;
    //         cin >> tmp;
    //         cout << tmp << ' ';
    //     }
    // }

    // char c, ch = 'c';
    // cin >> c >> ch;
    // cout << c << ch;

    // cout << (char)('0' + (int)14);
    // cout << typeid((int)10-'0').name();

    // queue<int> Q ={};
    // if(!Q.empty() && Q.front()==1) cout << 1;
    // cout << 0;

    // cout << pow((long double)2, (long double)20); //pow연산은 기본적으로 double반환, 큰수에서는 e+로 표기
    // cout << static_cast<long long>(pow(2, 20)-1) << "\n";
  
    // int test[10][10] = {}; //초기화 O
    // cout << test[0][0] << test[5][5];

    // bool arr[2][2] = {{1,1}, {1,1}};
    // bool arr2[2][2];
    // copy(&arr[0][0], &arr[2][2], &arr2[0][0]);
    // cout << arr2[1][1];

    int a[4] = {0,0,1,1};
    int des[4] = {1,2,3,4};
    do{
        for(int i=0; i<4; i++){
            if(a[i] ==0)
            cout << des[i]; 
        }
        cout << '\n';
    }while(next_permutation(a, a+4)); 
    //next_permutation 으로 순열과 조합을 뽑아낼수있음
}