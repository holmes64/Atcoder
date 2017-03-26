#include <iostream>
using namespace std;

int func(long long j) {
    if (j < 10) return 1;
 
    for (int i=1;;i++) {
        j/=10;
        if (j==0) return i;
 
    }
}
 
int main(){
    long long i,j;
    int ans = (1<<29);
    long long N;
    cin >> N;
 
    for (i = 1; i*i <= N; i++) {
        if (N%i == 0) {
            j = N / i;
            ans = min(ans, func(j));
        }
    }
    cout << ans;
    cout << (1<<29) << endl;
}
