#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int N,M, days;
int board[1001][1001];
queue<pair<int, int>> Q;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> M >> N;
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            int tmp;
            cin >> tmp;
            board[i][j] = tmp;
            if(tmp == 1) Q.push({i, j});
        }
    }   
    while(!Q.empty()){
        int size = Q.size();
        for(int j=0; j<size; j++){
            pair<int, int> curS = Q.front(); Q.pop();
            for(int i=0; i<4; i++){
                int nx = curS.X + dx[i];
                int ny = curS.Y + dy[i];
                if(nx>=0 && nx<N && ny>=0 && ny<M && board[nx][ny]==0){
                    board[nx][ny] = 1;
                    Q.push({nx, ny});
                }  
            }
        }
        days++;
    }

    bool check = true;
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            if(board[i][j] == 0){
                check = false;
                break;
            }
        }
        if(!check) break;
    }
    cout << (check ? days-1 : -1);
}