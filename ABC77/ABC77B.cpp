#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

int main(){

    int N;
    cin >> N;
    
    double sq;
    double ans;
    int q;
    for(int i=N; i>=1; i--){
        sq = sqrt(i);
        ans = int(sq) * int(sq);
        if(i == ans){
            q = i;
            break;
        }
    }

    cout << q << endl;
    
    return 0;
}