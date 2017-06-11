#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <algorithm>

#define ll long long

using namespace std;

int main(){

    int n;
    cin >> n;
    int hairetu[n];
    for(int i=0; i<n; i++){
        cin >> hairetu[i];
    } 
    ll minv = 1000;
    ll maxv = 0;
    for(int i=0; i<n; i++){
        if(hairetu[i] < minv){
            minv = hairetu[i];
        }
        if(hairetu[i] > maxv){
            maxv = hairetu[i];
        }
    }

    cout << maxv - minv << endl;

    return 0;
}
