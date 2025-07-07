#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.tie(0);
	ios::sync_with_stdio(0);

	int n;
	cin >> n;

	int arr[100001] = {};
	for(int i=0; i<n; i++){
		int tmp;
		cin >> tmp;
		arr[tmp]++;
	}
	for(int i=1; i<100001; i++)
		for(int j=0; j<arr[i]; j++) cout << i << "\n";
}