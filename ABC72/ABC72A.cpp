#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main(){

    int X, t;
    cin >> X >> t;

    if(X - t <= 0){
        cout << 0 << endl;
    }else{
        cout << X - t << endl;
    }

    return 0;
}