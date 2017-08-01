#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <string>

using namespace std;

int main(){
    int n; cin >> n;
    int cnt=0;
    int max_cnt=0;
    int result=1;

    for(int i=2; i<=n; i++){
        int a = i;
        cnt = 0;
        while(1){
            if(a % 2 == 1){
                if(cnt > max_cnt){
                    max_cnt = cnt;
                    result = i;
                }
                break;
            }else{
                a /= 2;
                cnt++;
            }
        }
    }

    cout << result << endl;

    return  0;
}