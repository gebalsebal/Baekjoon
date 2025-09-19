#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.tie(0);
	ios::sync_with_stdio(0);

	string hamburger;
	cin >> hamburger;
	
	if(hamburger == "(1)") cout << 0;
	else if(hamburger == ")1(") cout << 2;
	else cout << 1;
}