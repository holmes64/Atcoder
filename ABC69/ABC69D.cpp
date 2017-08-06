#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int a[100][100];

int main(){
    int H, W, N;
    cin >> H >> W;
    cin >> N;
    queue<int> nl;
    int num;
    for(int i=0; i<N; i++){
        cin >> num;
        nl.push(num);
    } 

    int cnt=0;
    int insert = 1;
    num = nl.front(); nl.pop();

    for(int i=0; i<H; i++){
        if(i % 2 == 0){
            for(int j=0; j<W; j++){
                cnt++;
                a[i][j] = insert;
                if(cnt == num){
                    num = nl.front(); nl.pop();
                    cnt = 0;
                    insert++;
                }
            }
        }else{
            for(int j=W-1; j>=0; j--){
                cnt++;
                a[i][j] = insert;
                if(cnt == num){
                    num = nl.front(); nl.pop();
                    cnt = 0;
                    insert++;
                }
            }
        }
    }

    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            if(j != W-1){
                cout << a[i][j] << " ";
            }else{
                cout << a[i][j];
            }
        }
        cout << endl;
    }

    return 0;
}