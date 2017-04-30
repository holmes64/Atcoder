#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){

    string A;
    getline(cin, A);
    string n1, n2, n3, n4;
    int count = 1;

    for(int i=0; i<A.size(); i++){
        if(A[i] == ' ' && count == 1 ){
            n1 = A[i-1];
            n2 = A[i+1];
            count++;           
        }
        if(A[i] == ' ' && count == 2 ){
            n3 = A[i-1];
            n4 = A[i+1];           
        }
    }
    if((n1 == n2) && (n3 == n4) ){
        cout << "YES" << endl;
    } else{
        cout << "NO" << endl;
    }

    return 0;
}