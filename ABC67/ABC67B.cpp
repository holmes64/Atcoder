#include <iostream>
#include <algorithm>
#include <vector>

#define ll long long

using namespace std;


int main(){
    int n, k;
    cin >> n >> k;
    vector<int> L(n);
    for(int i=0; i<n; i++){
        cin >> L[i];
    }

    sort(L.begin(), L.end());
    int wa = 0;
    for(int i=n-1; i >= n-k; i--){
        wa += L[i];
    }

    cout << wa << endl;

    return 0;
}