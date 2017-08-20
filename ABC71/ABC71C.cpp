#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

int A[100000];

int main(){
    int N; cin >> N;

    for(int i=0; i<N; i++){
        cin >> A[i];
    }

    sort(A, A+N, greater<int>());

    long long S = 1;
    int cnt = 0;
    for(int i=0; i<N-1; i++){
        if(cnt == 2) break;
        if(A[i] == A[i+1]){
            S *= A[i];
            cnt++;
            i++;
        }
    }

    if(cnt < 2){
        cout << 0 << endl;
    }else{
        cout << S << endl;
    }
}