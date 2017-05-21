#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){

    int H, W;
    cin >> H >> W;

    string picture[H+2][W+2];
    string line;

    for(int i=0; i < H+2; i++){
        for(int j=0; j < W+2; j++){
            picture[i][j] = "#";
        }
    }

    for(int i=1; i<=H; i++){
        cin >> line;
        for(int j=0; j <= W; j++){
            picture[i][j+1] = line[j];
        }
        picture[i][W+1] = "#";
    }    



    for(int i=0; i < H+2; i++){
        for(int j=0; j < W+2; j++){
            cout << picture[i][j];
        }
        cout << endl;
    }    

   

    return 0;
}