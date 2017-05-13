#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;

    long long hairetu[3000];
    int a, b;

    for(int i=1; i<=M; i++){
        cin >> a >> b;
        ++hairetu[a];
        ++hairetu[b];
    }

    for(int i=1; i<=N; i++){
        cout << hairetu[i] << endl;
    }


    return 0;
}