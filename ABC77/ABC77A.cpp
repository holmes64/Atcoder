#include <iostream>
#include <vector>

using namespace std;

int main(){

    char moji[6];
    for(int i=0; i<6; i++){
        cin >> moji[i];
    }

    if(moji[0] == moji[5] && moji[1] == moji[4] && moji[2] == moji[3]){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}