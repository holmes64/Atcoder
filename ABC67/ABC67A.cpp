#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int a, b;
    int c;
    cin >> a >> b;
    c = a + b;

    if( c % 3 == 0 || a %3 == 0 || b % 3 == 0){
        cout << "Possible" << endl;
    }else{
        cout << "Impossible" << endl;
    } 

    return 0;
}