#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.tie();
	ios::sync_with_stdio(0);

	int n,m;
	vector<int> card(100);
	int ans=0;
	
	cin >> n >> m;
	for(int i=0; i<n; i++) cin >> card[i];

	for(int i=0; i<n-2; i++){
		for(int j=i+1; j<n-1; j++){
			for(int k=j+1; k<n; k++){
				int tmp = card[i]+card[j]+card[k];
				if(ans<tmp && m>= tmp) ans = tmp;
			}
		}
	}
	cout << ans;
}