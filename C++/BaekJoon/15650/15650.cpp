#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N,M;

int main(){
	cin.tie(0);
	ios::sync_with_stdio(0);

	cin >> N >> M;
	vector<int> v(N);
	
	fill(v.begin()+M, v.end(), 1);
	do{
		for(int i=0; i<N; i++) if(v[i]==0) cout << i+1 << ' ';
		cout << '\n';
	} while(next_permutation(v.begin(), v.end()));
}