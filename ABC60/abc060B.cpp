#include <iostream>
#include <string>
#include <vector>
using namespace std;
// Choice Integers

int main(){

    int A, B, C;
    cin >> A >> B >> C;

    int wa;

    for(int i=1; i<=B; i++){
        wa = (A*i) % B;
        if(wa == C){
            break;
        }
    }

    if(wa == C){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}
    /* なにを考えたか、3つの数字の偶奇だけで決められると思って試していたらタイムアップ
    int num = 3;
    vector<int> hairetu(num);

    for(int i=0; i<num; i++){
        cin >> hairetu[i];
    }

    if(hairetu[0] == 1){
        cout << "YES" << endl;
    }else if(hairetu[0] != 1){
        if(((hairetu[0] % 2) == (hairetu[1] % 2)) && ((hairetu[1] % 2)) == (hairetu[2] % 2)){
            cout << "YES" << endl;
        }else if(((hairetu[0] % 2) == 1) && ((hairetu[1] % 2) == 1)){
            cout << "YES" << endl;
        }else if(((hairetu[0] % 2)) && ((hairetu[2] % 2))){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
*/

