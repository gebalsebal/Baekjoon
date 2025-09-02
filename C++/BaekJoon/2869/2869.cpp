#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.tie(0);
	ios::sync_with_stdio(0);

	int a, b, v;
	cin >> a >> b >> v;

	cout << ((v-a)%(a-b)==0 ? (v-a)/(a-b)+1 : (v-a)/(a-b)+2);
}