#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.tie(0);
	ios::sync_with_stdio(0);

	int n, x, cnt = 0;
	vector<bool> v(1000001);
	cin >> n;
	for(int i=0; i<n; i++){
		int tmp;
		cin >> tmp;
		v[tmp] = true;
	}
	cin >> x;
	for(int i=1; i<((x%2==0) ? x/2 : x/2+1); i++){
		if(v[i]&&v[x-i]) cnt++;
	}
	cout << cnt;
}
