#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.tie();
	ios::sync_with_stdio(0);

	string s;
	cin >> s;
	int eng[26];
	fill(eng, eng+26, 0);

	for(int i=0; i<s.size(); i++){
		eng[s[i]-'a']++;
	}

	for(int i=0; i<26; i++){
		cout << eng[i] << " ";
	}
}