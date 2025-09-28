#include <bits/stdc++.h>
using namespace std;

int N, M;
vector<int> board, v;
bool issued[10];

void func(int cnt){
	if(cnt == M){
		for(int i=0; i<M; i++) cout << v[i] << ' ';
		cout << '\n';
		return;
	}
	for(int i=0; i<N; i++){
		if(issued[i]) continue;
		issued[i]=true;
		v.push_back(board[i]);
		func(cnt+1);
		issued[i] = false;
		v.pop_back();
	}
}

int main(){
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin >> N >> M;
	for(int i=0; i<N; i++) {
		int tmp;
		cin >> tmp;
		board.push_back(tmp);
	}
	sort(board.begin(), board.end());
	func(0);	
}