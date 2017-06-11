#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <algorithm>

#define ll long long

using namespace std;

int main(){
    int n;
    bool cnt[8] = {false};
    int exc=0;
    int maxv=0;

    cin >> n;
    ll hairetu[n];
    for(int i=0; i<n; i++){
        cin >> hairetu[i];
    } 
    
    for(int i=0; i<n; i++){
        if(hairetu[i]>=1 && hairetu[i] <= 399){
            cnt[0] = true;
        }else if(hairetu[i]>=400 && hairetu[i] <= 799){
            cnt[1] = true;
        }else if(hairetu[i]>=800 && hairetu[i] <= 1199){
            cnt[2] = true;
        }else if(hairetu[i]>=1200 && hairetu[i] <= 1599){
            cnt[3] = true;
        }else if(hairetu[i]>=1600 && hairetu[i] <= 1999){
            cnt[4] = true;
        }else if(hairetu[i]>=2000 && hairetu[i] <= 2399){
            cnt[5] = true;
        }else if(hairetu[i]>=2400 && hairetu[i] <= 2799){
            cnt[6] = true;
        }else if(hairetu[i]>=2800 && hairetu[i] <= 3199){
            cnt[7] = true;
        }else{
            exc++;
        }
    }

    for(int i=0; i<8; i++){
        if(cnt[i] == true){
            maxv++;
        }
    }
    if(exc > 0 && maxv > 0){
        cout << maxv << " " << maxv+exc << endl;
    }else if(exc > 0 && maxv == 0){
        cout << 1 << " " << exc << endl;
    }else{
        cout << maxv << " " << maxv << endl;
    }


    return 0;
}
