#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int board[502][502] = {
    {1, 1, 1, 0, 1, 0, 0, 0, 0, 0},
    {1, 0, 1, 0, 1, 0, 0, 0, 0, 0},
    {1, 1, 1, 0, 1, 0, 0, 0, 0, 0},
    {1, 1, 0, 0, 1, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
};
bool vis[502][502];
int n = 7, m = 5;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);

    stack<pair<int, int>> s;
    vis[0][0] = 1;
    s.push({0,0});

    while(!s.empty()) {
        pair<int, int> cur = s.top(); s.pop();
        cout << '(' << cur.X << ", " << cur.Y << ") -> ";
        for(int i=0; i<4; i++){
            int nx = cur.X + dx[i];
            int ny = cur.Y + dy[i];
            if(nx >= 0 && nx < n && ny >= 0 & nx < m && !vis[nx][ny] && board[nx][ny] == 1) {
                s.push({nx, ny});
                vis[nx][ny] = 1;
            }
        }
    }
}