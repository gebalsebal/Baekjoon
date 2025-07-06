#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.tie(0);
	ios::sync_with_stdio(0);

	int a, b, GCD, LCM;
	cin >> a >> b;
	
	for(int i=1; i<=(a>=b ? b : a); i++){
		if(a%i==0 && b%i==0) GCD = i;
	}
	for(int i=(a<=b ? b : a); i<=a*b; i++){
		if(i%a==0 && i%b==0) {
			LCM = i;
			break;
		}
	}
	cout << GCD << "\n" << LCM;
}