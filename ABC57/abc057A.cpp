#include <iostream>
#include <math.h>
#include <vector>
using namespace std;;
int main(){
    int a, b;
    int c = 0;
    cin >> a >> b;
    c = a + b;
    c = c % 24;
    cout << c << endl;

    return 0;
}