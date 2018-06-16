#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>

using namespace std;

int calc_num(int x){
    int res=0;
    while(x%100 == 0){
        x /= 100;
        res++;
    }
    return res;
}

int main(){

    int d, n; 
    cin >> d >> n;
    int result = 0;
    int val = 0;
    while(result < n){
        val++;
        if(calc_num(val) == d) ++result;
    }

    cout << val << endl;

    return 0;
}
