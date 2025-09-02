#include <bits/stdc++.h>
using namespace std;

// 1 : R, 2 : G, 3 : B
int board[100][100];
bool vis[2][100][100];
int visCB[100][100];
int dx[4] = {0, -1, 0, 1};
int dy[4] = {-1, 0, 1, 0};
int N;
int cnt[2];

void BFS(int x, int y, int check){ // check : 0 = Normal, 1 = ColorBlind
    vis[check][x][y] = 1;
    int old = board[x][y];
    for(int dir=0; dir<4; dir++){
        int nx = x + dx[dir];
        int ny = y + dy[dir];
        int cur = board[nx][ny];
        if(nx < 0 || nx >= N || ny < 0 || ny >= N || vis[check][nx][ny]) continue;
        if(check == 0 && old == cur){
            vis[check][nx][ny] = 1;
            BFS(nx, ny, check);
        }
        if(check == 1 && old*cur != 3 && old*cur != 6){
            vis[check][nx][ny] = 1;
            BFS(nx, ny, check);
        }
        
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> N;
    for(int n=0; n<N; n++){
        string s;
        cin >> s;
        for(int m=0; m<N; m++) s[m]=='R' ? board[n][m] = 1 : (s[m]=='G' ? board[n][m] = 2 : board[n][m] = 3);
    }

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(!vis[0][i][j]){
                cnt[0]++;
                BFS(i, j, 0);
            }
            if(!vis[1][i][j]){
                cnt[1]++;
                BFS(i, j, 1);
            }   
        }
    }
    cout << cnt[0] << ' ' << cnt[1];
}