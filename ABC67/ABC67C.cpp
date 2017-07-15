#include <iostream>
#include <algorithm>
#include <vector>

#define ll long long
#define MAXV 10000000007
using namespace std;

int main(){

    int n; cin >> n;
    vector<ll> L(n);
    ll sum = 0;
    ll x = 0;
    for(int i=0; i<n; i++){
        cin >> L[i];
        sum += L[i];
    }

    ll result = MAXV;
    for(int i=0; i<n; i++){
        x += L[i];
        if(i+1 < n) result = min(result, abs(sum - 2*x));
    }

    cout << result << endl;

    return 0;
}
