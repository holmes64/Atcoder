#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
 
using namespace std;
 
long long a[100007];

int main(){

    int N; cin >> N;
    int two_cnt=0, cnt = 0, one_cnt = 0, zero_cnt=0; 
    for(int i=1; i<=N; i++){
        cnt = 0;
        cin >> a[i];
        long long num = a[i];
        while(num % 2 == 0){
            cnt++;
            num /= 2;
            if(cnt == 2){
                two_cnt++;
                break;
            }
        }
        if(cnt == 0){
            zero_cnt++;
        }else if(cnt == 1){
            one_cnt++;
        }
    }

    if(one_cnt>0){
        if(two_cnt >= zero_cnt){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }else{
        if(two_cnt+1 >= zero_cnt){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }

    return 0;
}