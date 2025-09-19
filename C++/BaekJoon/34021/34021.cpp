#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.tie(0);
	ios::sync_with_stdio(0);

	int T, N, L, M;
	cin >> T;
	while(T--){
		cin >> N >> M >> L;
		int min = M;
		for(int i=0; i<N; i++){
			int s;
			cin >> s;
			if(min > s && s != -1) min = s;
		}
		if(min > M-L) min = M-L;
		cout << "The scoreboard has been frozen with " << M-min << (M-min==1 ? " minute " : " minutes ") << "remaining.\n";
	}
}