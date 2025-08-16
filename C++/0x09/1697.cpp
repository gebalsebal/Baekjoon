#include <bits/stdc++.h>
using namespace std;

int dis[1000000];
queue<int> Q;
int N, K, tmp;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    fill(dis, dis+1000000, -1);

    cin >> N >> K;

    Q.push(N);
    dis[N] = 0;

    while(1){
        tmp = Q.front(); Q.pop();
        if(tmp-1 == K && tmp+1 == K && tmp*2 == K){
            break;
        }
        if(tmp-1 )
        Q.push(tmp-1);
        Q.push(tmp+1);
        Q.push(tmp*2);
        int time = dis[tmp];
        dis[tmp-1] = time;
        dis[tmp+1] = time;
        dis[tmp*2] = time;
    }
    cout << dis[tmp] + 1;
}