#include <bits/stdc++.h>
using namespace std;

int board[100001];
int vis[100001];

void team(int x){
    int cur = x;
    while(true){
        vis[cur] = x;
        cur = board[cur];
        if(vis[cur] == x){
            while(vis[cur] != -1){
                vis[cur] = -1;
                cur = board[cur];
            }
            return;
        }
        else if(vis[cur] != 0) return;
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);

    int T;
    cin >> T;
    while(T--){
        int n, cnt=0;
        cin >> n;
        fill(vis+1, vis+n+1, 0);
        for(int i=1; i<n+1; i++){
            cin >> board[i];
            if(board[i] == i) vis[i] = -1;
        }
        for(int i=1; i<n+1; i++){
            if(vis[i]==0) team(i);
        }
        for(int i=1; i<n+1; i++){
            if(vis[i] != -1) cnt++;
        }
        cout << cnt << "\n";
    }

}   