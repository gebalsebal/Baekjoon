#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.tie(0);
	ios::sync_with_stdio(0);

	int a, b, c, mul;
	cin >> a >> b >> c;
	int arr[10];
	fill(arr, arr+10, 0);
	mul = a * b * c;
	while(mul%10 || mul/10){
		arr[mul%10]++;
		mul /= 10;
	}
	for(int i : arr) cout << i << "\n";
}