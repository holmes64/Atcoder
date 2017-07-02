#include <iostream>

using namespace std;

int main(){

    int k; cin >> k;
    int i=100;
    while(k){
        if(k){
            i >>= 1;
            cout << i << endl;
            k--;
        }
    }
    return 0;
}