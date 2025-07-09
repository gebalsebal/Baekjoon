#include <bits/stdc++.h>
using namespace std;

int func1(string s){
	int eng[26];
	fill(eng, eng+26, 0);

	for(int i=0; i<s.size(); i++){
		eng[s[i]-'a']++;
	}

	for(int i=0; i<26; i++){
		cout << eng[i] << " ";
	}

	return 0;
}

int func2(int arr[], int N){
	int hundred[100] = {};
	for(int i=0; i<N; i++){
		if(hundred[arr[i]-1]) return 1;
		hundred[99-arr[i]]++;
	}
	return 0;
}

int func3(int N){ //시간 복잡도 O(lg(n))
	int sqrt_N = sqrt(N);
	if(sqrt_N*sqrt_N==N) return 1;
	else return 0;
}

int func4(int N){ //O(log(n))
	int mul=1;
	// for(int i=0; i<34; i++){
	// 	if(mul > N) break;
	// 	mul *= 2;
	// }
	while(2*mul <= N) mul *= 2;
	return mul;
}

int main(){
	cin.tie();
	ios::sync_with_stdio(0);

	cout << func3(756580036);		
}
