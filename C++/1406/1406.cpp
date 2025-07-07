#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.tie(0);
	ios::sync_with_stdio(0);

	list<char> L;
	int m;
	string s;
	
	cin >> s >> m;
	for(int i=0; i<s.size(); i++) L.push_back(s[i]);

	auto iter = L.begin();
	advance(iter, s.size());

	for(int i=0; i<m; i++){
		char command;
		cin >> command;
		if(command=='L'){
			if(iter != L.begin()) iter--;
		}
		else if(command=='D'){
			auto tmp = L.end()++;
			if(iter != L.end()++) iter++;
		}
		else if(command=='B'){
			if(iter != L.begin()) {
			iter--;
			iter = L.erase(iter);
			}
		}
		else if(command=='P'){
			char tmp;
			cin >> tmp;
			iter = L.insert(iter, tmp);
			iter++;
		}
	}
	for(char c : L) cout << c;

		// list<char> L = {'a', 'b', 'c', 'd'};
		// auto iter = L.end();
		
		// cout << *iter;	
		// iter--;
		// cout << *iter << "/";
		// iter++;
		// iter--;
		// cout << *iter;
	}