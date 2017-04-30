#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){

    string A;
    string B;

    int count=0;
    cin >> A;
    cin >> B;

    // 桁数で比較
    if(A.size() > B.size()){
        cout << "GREATER" << endl;
    }

    if(A.size() < B.size()){
        cout << "LESS" << endl;
    }
    if(A.size() == B.size()){
        for(int i=0; i<A.size(); i++){
            if(A[i] > B[i]){
                cout << "GREATER" << endl;
                break;
            }
            if(A[i] < B[i]){
                cout << "LESS" << endl;
                break;
            }
            if(A[i] == B[i]){
                count++;
            }
        }
        if(count == A.size()){
                cout << "EQUAL" << endl;
        }
    }
    return 0;
}


