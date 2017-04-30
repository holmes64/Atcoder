#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    string S;
    string U[3];
    int num = 1;
    getline(cin, S);
    int length = S.size();

    transform(S.begin(), S.end(), S.begin(), ::toupper);


    for(int i=0; i < length; i++){
        if(i == 0){
            U[0] = S[0];
        }

        if(S[i] == ' '){
            U[num] = S[i+1];
            num++;
        }

    }

    cout << U[0];
    cout << U[1];
    cout << U[2] << endl;

    return 0;
}