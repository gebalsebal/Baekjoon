#include <bits/stdc++.h>
using namespace std;

int func2(int arr[], int N){
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
