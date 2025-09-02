#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.tie(0);
	ios::sync_with_stdio(0);

	vector<int> grade;
	int n;
	float maxGrade=0, avgGrade=0;

	cin >> n;
	for(int i=0; i<n; i++) {
		int tmp;
		cin >> tmp;
		if(maxGrade<tmp) maxGrade=tmp;
		grade.push_back(tmp);	
	}
	for(int i=0; i<n; i++) avgGrade += (float)(grade[i]/maxGrade) * 100;
	cout << avgGrade/n;
}
