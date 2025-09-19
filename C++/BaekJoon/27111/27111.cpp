#include <bits/stdc++.h>
using namespace std;

int check[2000001];

int main(){
	cin.tie(0);
	ios::sync_with_stdio(0);

	int N, loss=0, left_1 = 0;
	cin >> N;
	while(N--){
		int a,b;
		cin >> a >> b;
		if(b==1){
			if(check[a]==1) {
				loss++;
				left_1--;
			}
			else check[a] = 1;
			left_1++;
		}
		else{
			if(check[a]==1) check[a] = 0;
			else {
				loss++;
				left_1++;
			}
			left_1--;
		}
	}
	cout << loss+left_1;
}