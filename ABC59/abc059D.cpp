#include <iostream>
#include <string>
#include <vector>
using namespace std;

// ALice Brown
// 具体的な回答の流れを持てれば問題は解けるの典型例だなぁと
    
int main(){
    long long X, Y;
    cin >> X >> Y;

    long long ans;

    ans = abs(X - Y);

    if(ans <= 1){
        cout << "Brown" << endl;
    }else{
        cout << "Alice" << endl;
    }

    return 0;
}