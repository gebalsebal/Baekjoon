#include <bits/stdc++.h>
using namespace std;

int n,a,b, total;

int isPrime(int n){
	if(n==1) return b;
	if(n==2) return a;
	int sqrt_n = (int)sqrt(n);
	for(int i=2; i<=sqrt_n; i++){
		if(n % i == 0) return b;
	}
	return a;
}

int main(){
	cin.tie(0);
	ios::sync_with_stdio(0);


	cin >> n >> a >> b;
	int board[2][n];
	for(int i=0; i<n; i++){
		int tmp;
		cin >> tmp;
		board[0][i] = tmp;
	}
	for(int i=0; i<n; i++){
		int tmp;
		cin >> tmp;
		board[1][i] = tmp;
	}
	if(n==1){
		cout << isPrime(board[0][0] + board[1][0]);
		return 0;
	}

	for(int i=0; i<n-1; i++){
		int sum1 = isPrime(board[0][i] + board[0][i+1]); 
		int sum2 = isPrime(board[1][i] + board[1][i+1]);
		int sum3 = isPrime(board[0][i] + board[1][i]);
		int sum4 = isPrime(board[0][i+1] + board[1][i+1]);
		if(sum1+sum2 > sum3+sum4){
			if(i==n-3){
				total += isPrime(board[0][i+2] + board[1][i+2]);
			}
			total += (sum1+sum2);
			i++;
		}
		else {
			if(i==n-2) {
				total += (sum3+sum4);
				continue;
			}
			total += sum3;
		}
	}

	cout << total;
}