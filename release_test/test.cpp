#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=10000;

    std::chrono::system_clock::time_point start = std::chrono::system_clock::now();

    while(n--){
        continue;
    }
    std::chrono::duration<double>sec = std::chrono::system_clock::now() - start;
    cout << "!\n";
    std::cout << "for문을 돌리는데 걸리는 시간(초) : " << sec.count() <<"seconds";
}