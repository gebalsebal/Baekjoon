#include <bits/stdc++.h>
using namespace std;

int factorial(int num){
	if(num==0) return 1;
	for(int i=num-1; i>1; i--) num *= i;
	return num;
}

int main(){
	cin.tie(0);
	ios::sync_with_stdio(0);

	int n, k;
	cin >> n >> k;
	cout << factorial(n) / (factorial(n-k) * factorial(k));
}
