#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main(){

    string S;
    cin >> S;

    for(int i=0; i<S.size(); i++){
        cout << S[i];
        i++;
    }
    cout << endl;

    return 0;
}