#include <bits/stdc++.h>
using namespace std;


int digit_cnt(int num){
	int cnt=0;
	while(num>0){
		num /= 10;
		cnt++;
	}
	return cnt;
}
void digit_divide(int num, int cnt, array<int,5> &a){
	for(int i=0; i<cnt; i++){
		a[cnt-i-1] = num%10;
		num /= 10;
	}
}

int main(){
	cin.tie();
	ios::sync_with_stdio(0);

	while(1){
		array<int, 5> div_num;
		int num, digit, check=1;
		cin >> num;
		if(num==0) break;
		digit = digit_cnt(num);
		digit_divide(num, digit, div_num);
		
		for(int i=0; i<digit/2; i++){
			if(div_num[i] != div_num[digit-1-i]) {
				check = 0;
				break;
			}			
		}
		if(check==0) cout << "no" << "\n";
		else if(check==1) cout << "yes"<< "\n";
	}
}