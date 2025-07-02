#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.tie();
	ios::sync_with_stdio(0);

	int n, ans;
	cin >> n;
	for(int i=0; i<100000; i++){
		if(n<=(3*i*i+3*i+1)){
			ans = i+1;
			break;
		}
	}
	cout << ans;
}
