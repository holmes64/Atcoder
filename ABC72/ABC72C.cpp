#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int A[100007];
int B[100007] = {0};

int main(){

    int N; cin >> N;
    for(int i=0; i<N; i++){
        cin >> A[i];
        B[A[i]]++;
    }

    int temp=0;
    int result=0;

    if(N == 1){
        cout << 1 << endl;
    }else{
        for(int i=1; i<100001; i++){
            temp = B[i] + B[i-1] + B[i+1];
            if(temp > result) result = temp;
        }
        cout << result << endl;
    }
    

    return 0;
}