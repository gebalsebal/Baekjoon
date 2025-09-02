#include <bits/stdc++.h> 
using namespace std;
#define X first
#define Y second

char board[1001][1001];
queue<pair<int, int>> JQ;
queue<pair<int, int>> FQ;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};
int Jcnt, Fcnt, dis;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);

    int R, C;
    cin >> R >> C;

    for(int i=0; i<R; i++){
        for(int j=0; j<C; j++){
            char tmp;
            cin >> tmp;
            board[i][j] = tmp; 
            if(tmp == 'J') {
                JQ.push({i, j});
                if(i==0 || i==R-1 || j==0 || j==C-1){
                    cout << 1;
                    return 0;
                }
            }
            if(tmp == 'F') FQ.push({i, j});
        }
    }
    while(!JQ.empty()){
        Jcnt = JQ.size();
        Fcnt = FQ.size();
        for(int i=0; i<Fcnt && !FQ.empty(); i++){
            pair<int, int> curF = FQ.front(); FQ.pop();
            for(int j=0; j<4; j++){
                int nx = curF.X + dx[j];
                int ny = curF.Y + dy[j];
                if(nx<0 || nx>=R || ny<0 || ny>=C || board[nx][ny]=='#' || board[nx][ny]=='F') continue;
                board[nx][ny] = 'F';
                FQ.push({nx, ny});
            }
        }
        for(int i=0; i<Jcnt; i++){
            pair<int, int> curJ = JQ.front(); JQ.pop();
            for(int j=0; j<4; j++){
                int nx = curJ.X + dx[j];
                int ny = curJ.Y + dy[j];
                if((nx==0 || nx==R-1 || ny==0 || ny ==C-1) && board[nx][ny] == '.'){
                    cout << dis+2;
                    return 0;
                }
                if(board[nx][ny]=='.'){
                    board[nx][ny] = 'J';
                    JQ.push({nx, ny});
                }
            }
        }
        dis++;
    }
    cout << "IMPOSSIBLE";
}