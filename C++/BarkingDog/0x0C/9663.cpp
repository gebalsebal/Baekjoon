#include <bits/stdc++.h>
using namespace std;
#include <chrono> // ⭐시간 측정에 필요

using namespace std;

class Timer
{
    using clock_t = std::chrono::high_resolution_clock;
    using secont_t = std::chrono::duration<double, std::ratio<1>>;

    // Time 타입의 객체가 생성되자마자 start_time 멤버 변수에 시작 시간이 대입된다.
    std::chrono::time_point<clock_t> start_time = clock_t::now();   

public:
    void elapsed()
    {
        std::chrono::time_point<clock_t> end_time = clock_t::now();  // elapsed() 멤버 함수를 실행한 시간

        // elapsed() 멤버 함수가 실행되자마자 end_time - start_time 빼주어 실행 시간을 구하고 출력한다.
        cout << std::chrono::duration_cast<secont_t>(end_time - start_time).count() << endl;
    }
};

bool issued[15][15];
int n, cnt;

void check(int a, int b){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j==b || i+j==a+b || i-j==a-b) issued[i][j] = false; 
        }
    }
}

void Queen(int k){ //k는 현재 몇개의 q이 놓였는지, 몇번째 행에 위치해야하는지
    if(k==n) cnt++;
    for(int i=0; i<n; i++){
        bool arr[15][15];
        if(issued[k][i]){
            copy(&issued[0][0], &issued[n][n], &arr[0][0]);
            check(k,i);
            Queen(k+1);
            copy(&arr[0][0], &arr[n][n], &issued[0][0]);
        }
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> n;
    for(int i=0; i<n; i++) fill(&issued[i][0], &issued[i][n], true);
    Timer timer;
    Queen(0);
    cout << cnt;
    timer.elapsed();

    return 0;
}