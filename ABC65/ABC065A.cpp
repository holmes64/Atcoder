#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

int main(){

    int x,a, b;
    cin >> x >> a >> b;

    if(a >= b ){
        cout << "delicious" << endl;
    }else if(b-a <= x){
        cout << "safe" << endl;
    }else{
        cout << "dangerous" << endl;
    }

    return 0;
}