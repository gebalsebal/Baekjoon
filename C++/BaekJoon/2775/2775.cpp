#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.tie(0);
	ios::sync_with_stdio(0);

	int k, n, t;
	cin >> t;
	for(int i=0; i<t; i++){
		cin >> k >> n;
		vector<int> apt(n);
		for(int j=0; j<n; j++) apt[j] = j+1; //아파트 1층 초기화
		for(int j=0; j<k; j++) {
			for(int l=1; l<n; l++) apt[l] += apt[l-1];
		}//아파트 층층이 계산
		cout << apt[n-1] << "\n";
	}
}