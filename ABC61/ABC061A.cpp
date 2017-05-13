#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int A, B, C;
    cin >> A >> B >> C;

    if((C >= A) && (C <= B)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}