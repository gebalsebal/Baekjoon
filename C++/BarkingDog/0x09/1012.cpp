#include <bits/stdc++.h> 
using namespace std;
#define X first
#define Y second

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);

    int T, M, N, K;
    cin >> T;
    while(T--){
        int board[51][51] = {};
        bool vis[51][51] {};
        stack<pair<int, int>> S;
        queue<pair<int, int>> startPoint;
        int cnt = 0;

        cin >> M >> N >> K;
        for(int j=0; j<K; j++){
            int a, b;
            cin >> a >> b;
            board[a][b] = 1;
            startPoint.push({a, b});
        }
        S.push(startPoint.front());
        vis[startPoint.front().X][startPoint.front().Y] = 1;
        startPoint.pop();
        while(!S.empty()){
            pair<int, int> cur = S.top(); S.pop();
            for(int dir=0; dir<4; dir++){
                int nx = cur.X + dx[dir];
                int ny = cur.Y + dy[dir];
                if(nx<0 || nx >= M || ny < 0 || ny >= N) continue;
                if(vis[nx][ny] || board[nx][ny] == 0) continue;
                S.push({nx, ny});
                vis[nx][ny] = 1;
            }
            if(S.empty()){
                cnt++;
                while(!startPoint.empty()){
                    pair<int, int> cur = startPoint.front(); 
                    startPoint.pop();
                    if(!vis[cur.X][cur.Y]) {
                        S.push(cur);
                        break;
                    }
                }
            }
        }
        cout << cnt << '\n';
    }
}

// BFS를 재귀로 구현해서 방문하면 board의 값을 0으로 바꾸는 방식으로 vis 사용X