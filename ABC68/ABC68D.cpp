#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <string>

using namespace std;

int main(){
    long long k;
    cin >> k;
    cout << 50 << endl;

    for(int i=0; i<50; i++){
        if(i != 0) cout << " ";
        cout << 49-i+(k+49-i) / 50;
    }
    cout << endl;

    return  0;
}