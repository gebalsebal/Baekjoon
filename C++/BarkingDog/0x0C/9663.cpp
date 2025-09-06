#include <bits/stdc++.h>
using namespace std;

int n, cnt;
bool issued[14][14]; //true: 놓을수 있는 곳

void check(bool arr[14][14], int x, int y){
    for(int a=0; a<n; a++){
        for(int b=0; b<n; b++){
            if(x==a || y==b || x+y==a+b || x-y==a-b) 
                issued[a][b] = false;
        }
    }
}

void Queen(int x){ //x는 현재 놓여진 Q의 갯수 및 행의 위치
    if(x==n) {
        cnt++; 
        return;
    }
    for(int c=0; c<n; c++){ //x행의 0부터 n-1 열까지
        if(issued[x][c]){//놓을수있는지 판단
            bool arr[14][14];
            copy(&issued[0][0], &issued[14][14], &arr[0][0]);
            check(issued, x, c);
            Queen(x+1);
            copy(&arr[0][0], &arr[14][14], &issued[0][0]);
        }
            //가능시, 놓고 못놓는곳 체크
            //Q(x+1)
            // 다시 체크 풀기
        //
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    for(int i=0; i<14; i++) fill(issued[i], issued[i] + 14, true);
    cin >> n;
    Queen(0);

    cout << cnt;
}