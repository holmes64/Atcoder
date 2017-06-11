#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <algorithm>
#include <queue>

#define ll long long

using namespace std;

int main(){
    int N;  cin >> N;
    string S;   cin >> S;
    
    int cnt=0;
    
    for(int i=N-1; i>=0; i--){
        if(S[i] == ')'){
            cnt++;
        }else{
            if(cnt > 0){
                cnt--;
            }else{
                S += ')';
            }
        }
    }

    cout << string(cnt, '(')+S << endl;

    return 0;
}
