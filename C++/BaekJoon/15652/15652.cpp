#include <bits/stdc++.h>
using namespace std;

int N, M;
vector<int> v;

void func(int cnt){
	if(cnt == M){
		for(int i=0; i<M; i++) cout << v[i] << ' ';
		cout << '\n';
		return;
	}
	for(int i=1; i<N+1; i++){
		int tmp = (v.empty() ? 0 : v.back());
		if(tmp > i) continue;
		v.push_back(i);
		func(cnt+1);
		v.pop_back();
	}
}

int main(){
	cin.tie(0);
	ios::sync_with_stdio(0);

	cin >> N >> M;
	func(0);
}