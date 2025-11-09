#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int box[100][100][100];
int dx[6] = {1, 0, -1, 0, 0, 0};
int dy[6] = {0, 1, 0, -1, 0, 0};
int dz[6] = {0, 0, 0, 0, 1, -1};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N,M,H, days=0;
    queue<pair<int, pair<int,int>>> Q;

    cin >> M >> N >> H;
    for(int h=0; h<H; h++)
        for(int n=0; n<N; n++)
            for(int m=0; m<M; m++){
                int toma;
                cin >> toma;
                if(toma == 1) Q.push({h,{n ,m}});
                box[h][n][m] = toma;
            }
    Q.push({-1,{-1,-1}}); //하루 checkpoint

    //모두 익지 못하는 상황일때
    if(Q.empty()){
        cout << 0;
        return 0;
    }
    //토마토 익기
    while(!Q.empty()){
        if(Q.front().X == -1){
            days++;
            Q.pop();
            Q.push({-1,{-1,-1}});
        }
        int cur_z = Q.front().X;
        pair<int,int> cur_xy = Q.front().Y; Q.pop();
        for(int dir=0; dir<6; dir++){
            int nz = cur_z + dz[dir];
            int ny = cur_xy.X + dy[dir];
            int nx = cur_xy.Y + dx[dir];
            if(nz<0||ny<0||nx<0|| nz>=H||ny>=N||nx>=M) continue;
            if(box[nz][ny][nx] == 0){
                box[nz][ny][nx] = 1;
                Q.push({nz,{ny,nx}});
            }
        }
    }
    
    //익을 수 있는게 다 익은 상황일때
    for(int h=0; h<H; h++)
        for(int n=0; n<N; n++)
            for(int m=0; m<M; m++){
                if(box[h][n][m] == 0){
                    cout << -1;
                    return 0;
                }
            }
    cout << days-1;
    return 0;
}