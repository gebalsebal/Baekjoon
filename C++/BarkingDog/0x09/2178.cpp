#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int N,M;
int board[101][101];
bool vis[101][101];
int dis[101][101];
queue<pair<int, int>> Q;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int main(){
    cin >> N >> M;
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            char ch;
            cin >> ch;
            board[i][j] = (ch=='1' ? 1 : 0);
        }
    }
    Q.push({0,0});
    vis[0][0] = 1;
    dis[0][0] = 1;
    while(!Q.empty()){
        pair<int, int> cur = Q.front(); Q.pop();
        for(int dir=0; dir<4; dir++){
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
            if(vis[nx][ny] || board[nx][ny] != 1) continue;
            vis[nx][ny] = 1;
            Q.push({nx, ny});
            dis[nx][ny] = dis[cur.X][cur.Y] + 1;
            if(nx==N && ny==M) break;
        }
    }
    cout << dis[N-1][M-1];
}