#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int d, e, f;
    d = a + b;
    e = b + c;
    f = c + a;
    
    d = min(d,e);
    d = min(d,f);

    cout << d << endl;

    return 0;
}