#include <iostream>
#include <vector>
using namespace std;

int main(){
    int cnt;
    char  tmp;
    cin >> cnt;
    vector<string> input;
    input.resize(cnt+1);
    for(int i=0; i<cnt; i++){
        cin >> input[i];
    }
    for(int i=0; i<input[0].size(); i++){
        tmp = input[0][i];
        for(int j=0; j<cnt; j++){
            if(tmp != input[j][i]){
                input[cnt][i] = '?';
                cout << input[cnt][i];
                break;
            }
            tmp = input[j][i];
            if(j == cnt-1){
                input[cnt][i] = tmp;
                cout << input[cnt][i];
            }
        }
    }
    cout << input[cnt];
}