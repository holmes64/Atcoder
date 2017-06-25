#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

int main(){

    int n;
    cin >> n;

    int A[n+1];
    for(int i=1; i<=n; i++){
        cin >> A[i];
    }

    int cnt=0;
    int ind=1;
    int flg = 0;
    for(int i=1; i<=n; i++){
        ind = A[ind];
        cnt++;
        if(ind == 2){
            flg = 1;
            break;
        }
    }    

    if(flg == 1){
        cout << cnt << endl;
    }else{
        cout << -1 << endl;
    }

    return 0;
}