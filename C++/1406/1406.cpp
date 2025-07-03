#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.tie();
	ios::sync_with_stdio(0);

	list<char> L(600000);
	int m;
	string s;
	
	cin >> s >> m;
	for(int i=0; i<s.size(); i++) L.push_back(s[i]);

	auto iter = L.end();

	for(int i=0; i<m; i++){
		char command;
		cin >> command;
		if(command=='L'){
			if(iter != L.begin())iter--;
		}
		else if(command=='D'){
			if(iter!= L.end()) iter++;
		}
		else if(command=='B'){
			L.erase(iter);
			iter--;
		}
		else if(command=='P'){
			char tmp;
			cin >> tmp;
			L.insert(++iter, tmp);
		}
	}
	for(int c : L) cout << c << " ";
}