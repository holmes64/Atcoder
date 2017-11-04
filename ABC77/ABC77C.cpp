#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

typedef long long ll;
using namespace std;

int main(){

    int N; cin >> N;

    int A[N];
    int B[N];
    int C[N];

    for(int i=0; i<N; i++) scanf("%d", &A[i]);
    for(int i=0; i<N; i++) scanf("%d", &B[i]);
    for(int i=0; i<N; i++) scanf("%d", &C[i]);

    sort(A, A+N);
    sort(C, C+N);
    long long int cnt=0;

    for(int i=0; i<N; i++){
        ll I = lower_bound(A, A+N, B[i]) - A;
        ll J = upper_bound(C, C+N, B[i]) - C;
        cnt += I * (N-J);
    }
    cout << cnt << endl;

    return 0;
}