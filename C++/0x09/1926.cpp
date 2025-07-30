#include <bits/stdc++.h> 
using namespace std;
#define X first
#define Y second

int n, m, cnt = 0, max_size = 0;
int board[501][501];
int vis[501][501];
queue<pair<int, int>> start_point;
queue<pair<int, int>> Q;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            int tmp;
            cin >> tmp;
            if(tmp == 1) start_point.push({i, j});
            board[i][j] = tmp;
        }
    }

    while(!start_point.empty()){
        int size = 0;
        pair<int,int> curS = start_point.front(); 
        start_point.pop();
        if(!vis[curS.X][curS.Y]){
            Q.push({curS.X, curS.Y}); size++;
            vis[curS.X][curS.Y] = 1;
            cnt++;
        }
        while(!Q.empty()){
            pair<int, int> cur = Q.front(); Q.pop(); 
            for(int dir=0; dir<4; dir++){
                int nx = cur.X + dx[dir];
                int ny = cur.Y + dy[dir];
                if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
                if(vis[nx][ny] || board[nx][ny] != 1) continue;
                vis[nx][ny] = 1;
                Q.push({nx, ny}); size++;
            }
        }
        if(size > max_size) max_size = size;
    }

    cout << cnt << "\n" << max_size;
}