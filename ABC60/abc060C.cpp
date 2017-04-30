#include <iostream>
#include <string>
#include <vector>
using namespace std;
// sentou

/*
    //動的配列を用意しなくても単純に書ける
    long longlist[200001];
    for(int i=0; i<N; i++){
        scanf("%lld", &list[i]);
    }
*/

int main(){
    // input 
    int N, T;
    cin >> N >> T;

    vector<int> list(N);
    for(int i=0; i<N; i++){
        cin >> list[i];
    } 

    //
    long long result = 0;
    for(int i=0; i<N-1; i++){
        result += min(T, list[i+1] - list[i]);
    }
    result += T;

    cout << result << endl;
    return 0;
}