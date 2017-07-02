#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main(){
    string S;
    cin >> S;

    int flg = 0;    
    int cnt=0;
    int l = S.size();
    S.erase(l-1);
    l = S.size();
    while(l >= 2 || flg == 0){
        int l = S.size();
        if(l % 2 == 1){
            S.erase(l-1);
            l -= 1;
        }
        string T;
        int half = l/2;
        cnt = 0;
        for(int i=half; i<l; i++) T += S[i];
        for(int i=0; i<half; i++){
            ++cnt;
            if(S[i] != T[i]) break;
            if( i == half-1 && S[i] == T[i]){
                flg = 1;
                break;
            }
        }
        if(flg == 1) break;
        S.erase(l-1);
        l -= 1;
    }

    cout << cnt*2 << endl;

    return 0;
}