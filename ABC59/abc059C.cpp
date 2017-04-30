#include <iostream>
#include <string>
#include <vector>
using namespace std;
// Sequence
// メモリーエラーで弾かれてるのが大部分ったからlong long を併用することを視野にいれるべき
long long calc(int MOD, vector<int> hairetu, int n){
    long long result=0;
    long long sum=0;

    for(int i=0; i<n; i++){
        sum += hairetu[i];
        // if文で偶奇の判定を見ている
        // 以下のif条件に当てはまらない　＝　問題の制約に常に当てはまる（変更する必要のない数値）
        if(i%2 == MOD && sum <= 0){
            result += (1-sum); // 最初は毎回+1or-1する方法を愚直に考えていたが、それは時間がかかると納得
            sum = 1;
        }else if(i%2 != MOD && sum >= 0){
            result += (sum+1);
            sum = -1;
        }

    }

    return result;
}



int main(){
    int num;
    cin >> num;

    vector<int> hairetu(num);
    for(int i=0; i<num; i++){
        cin >> hairetu[i];
    }

    cout << min(calc(0, hairetu, num), calc(1, hairetu, num)) << endl;
    return 0;
}