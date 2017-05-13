#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){

    long long N;
    long long K;
    cin >> N >> K;

    long long a=0;
    long long b=0;

    long long a_hairetu[1000000];

    long long b_temp=0;
    long long result = 0;
    //int cnt=0;

    for(long long i=0; i<N; i++){
        cin >> a >> b;
        a_hairetu[a-1]+= b;

    }

    for(long long i=0; i<1000000; i++){
        b_temp += a_hairetu[i];
        if(b_temp >= K){
            result = i+1; 
            break;
        }        
    }

    cout << result << endl;
    return 0;
}