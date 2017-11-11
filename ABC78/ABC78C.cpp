#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int main(){

    double n, m;
    cin >> n >> m;

    long long t=pow(2,m);
    long long x = (1900*m + 100*(n-m));

    cout << x*t << endl;

    return 0;
}