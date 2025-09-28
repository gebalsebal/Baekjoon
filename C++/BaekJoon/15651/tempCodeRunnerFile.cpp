#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M;
vector<int> v;

void back(int cnt){
	if(cnt==M) {
		for(int i=0; i<M; i++) cout << v[i] << ' ';
		cout << '\n';
		return;
	}
		for(int i=0; i<N; i++){
			v.push_back(i+1);
			back(cnt+1);
			v.pop_back();
		}
}

int main(){
	cin.tie(0);
	ios::sync_with_stdio(0);

	cin >> N >> M;
	back(0);
}