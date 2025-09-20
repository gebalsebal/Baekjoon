#include<bits/stdc++.h>
using namespace std;

int N, S, cnt;
int arr[20];


void func(int cur, int sum){
    if(cur == N) {
        if(sum == S) cnt++;
        return;
    }
    func(cur+1, sum+arr[cur]); //cur번째가 포함될때
    func(cur+1, sum); //cur번쨰가 포함되지않을때
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> N >> S;
    for(int i=0; i<N; i++){
        int tmp;
        cin >> tmp;
        arr[i] = tmp;
    }
    std::chrono::system_clock::time_point start = std::chrono::system_clock::now();

    func(0, 0);
    if(S==0) cnt--;
    cout << cnt;
    
    std::chrono::duration<double>sec = std::chrono::system_clock::now() - start;
    std::cout << "for문을 돌리는데 걸리는 시간(초) : " << sec.count() <<"seconds";
    
    return 0;
}