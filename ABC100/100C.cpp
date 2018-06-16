#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int main(){

    int A[10000];
    int result = 0;
    int n;  cin >> n;
    for(int i=0; i<n; i++){
        cin >> A[i];
        while(A[i]%2 == 0){
            A[i] /= 2;
            result++;
        }
    }
    cout << result << endl;    

    return 0;
}