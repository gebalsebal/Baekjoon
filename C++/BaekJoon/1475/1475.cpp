#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.tie(0);
	ios::sync_with_stdio(0);

	int n;
	cin >> n;
	int num[10] = {};

	while(n%10 || n/10){
		num[n%10]++;
		n /= 10;
	}
	int tmp = num[6] + num[9];
	tmp = (tmp%2==0) ? tmp/2 : tmp/2+1;
	num[6] = 0;
	num[9] = 0;
	int* maxEle = max_element(num, num+10);
	if(tmp >= *maxEle) cout << tmp;
	else cout << *maxEle;
}