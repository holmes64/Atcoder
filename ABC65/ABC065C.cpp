#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <algorithm>

#define ll long long

using namespace std;



int main(){

    ll NN = 1e+9;
    NN += 7;

    ll n;
    ll m;
    cin >> n >> m;
    ll result=1;

    if(n >= m+2 || m >= n+2){
        cout << 0 << endl; 
    }else if(n == m){
        for(ll i=n; i>0; i--){
            result *= i;
            result %= NN;
        }
        result = result * result;
        result *= 2;
        cout << result % NN << endl;
    }else if(n > m){
        for(ll i=n; i>0; i--){
            result *= i;
            result %= NN;
        }
        for(ll i=m; i>0; i--){
            result *= i;
            result %= NN;
        }
        cout << result % NN << endl;        
    }else if(n < m){
        for(ll i=m; i>0; i--){
            result *= i;
            result %= NN;
        }
        for(ll i=n; i>0; i--){
            result *= i;
            result %= NN;
        }
        cout << result % NN << endl;        
    }

    return 0;
}