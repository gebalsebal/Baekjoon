#include <bits/stdc++.h>
using namespace std;

priority_queue<int, vector<int>, greater<int>> pq;

int main(){
	cin.tie(0);
	ios::sync_with_stdio(0);

	int n;
	cin >> n;
	while(n--){
		int x;
		cin >> x;
		if(x > 0) pq.push(x);
		else{
			if(pq.size()==0) cout << 0;
			else {
				cout << pq.top();
				pq.pop();
			}
			cout << '\n';
		}
	}		
}