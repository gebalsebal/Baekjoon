#include <bits/stdc++.h>
using namespace std;

int digit_sum(int num){
	int sum=0;
	while(num>0){
		sum += num%10;
		num /= 10;
	}
	return sum;
}

int digit_cnt(int num){
	int cnt=1;
	while(num>0){
		num/= 10;
		if(num!=0) cnt++;
	}
	return cnt;
}

int main(){
	cin.tie();
	ios::sync_with_stdio(0);

	int n, m=0;
	cin >> n;
	int digit = digit_cnt(n);

	for(int i=digit; i<digit*9; i++){
		int tmp = n-i;
		if(i == digit_sum(tmp)) m = tmp;
	}

	cout << m;
}

