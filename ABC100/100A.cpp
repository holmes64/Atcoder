#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){

    int e, s; 
    cin >> e >> s;

    if(e <= 8 && s <= 8){
        cout << "Yay!" << endl;
    }else{
        cout << ":(" << endl;
    }

    return 0;
}