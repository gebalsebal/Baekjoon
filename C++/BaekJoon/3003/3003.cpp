#include <iostream> // 표준 입출력 라이브러리 포함
using namespace std;

int main() {
    int chessInput[6];
    int chessAns[6] = {1,1,2,2,2,8};
    for(int i=0; i<6; i++){
        cin >> chessInput[i];
        cout << chessAns[i] - chessInput[i] << " "; 
    }


}