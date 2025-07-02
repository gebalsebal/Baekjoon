#include <bits/stdc++.h>
using namespace std;
#define r 31
#define M 1234567891

int main(){
	cin.tie();
	ios::sync_with_stdio(0);


	int l;
	string str;
	cin >> l >> str;
	
	long long hash=0, R=1;

	for(int i=0; i<l; i++){
		hash += ((int(str[i])-96) * R) % M;
		hash %= M;
		R = (R * r) % M;
	}
	cout << hash;
	
}


//mod 연산은 (a * b) mod c = (a mod c * b mod c ) mod c
