#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.tie(0);
	ios::sync_with_stdio(0);

	int n,m;
	cin >> n >> m;
	int arr[n];
	for(int i=0; i<n; i++) arr[i] = i+1;
	do{
		for(int i=0; i<n; i++){
			if(arr[i]<=m) cout << i+1 << " ";
		}
		cout << '\n';
	}while(next_permutation(arr, arr+n));
}