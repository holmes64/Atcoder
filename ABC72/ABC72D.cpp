#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main(){

    int N; cin >> N;
    int A[N+1];

    int cnt = 0;
    for(int i=1; i<=N; i++){
        cin >> A[i];        
    }

    int temp;
    for(int i=1; i<=N; i++){
        if(A[i] == i){
            temp = A[i];
            A[i] = A[i+1];
            A[i+1] = temp;
            cnt++;
        }

    }

    cout << cnt << endl;

    return 0;
}