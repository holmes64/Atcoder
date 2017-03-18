#include <iostream>
using namespace std;

int main(){
    int W, a, b;
    cin >> W >> a >> b; 

    if(a < b){
        if(a+W > b){
            cout << 0 << endl;
        }
        if(a+W < b){
            cout << b - (a+W) << endl;
        }
        if(a+W == b){
            cout << 0 << endl;   
        }
    }
    if(a > b){
        if(b+W > a){
            cout << 0 << endl;
        }
        if(b+W < a){
            cout << a - (b+W) << endl;
        }
        if(b+W == a){
            cout << 0 << endl;
        }
    }
    if(a == b){
        cout << 0 << endl;
    }
    return 0;
}