#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){

    int x, y;
    cin >> x >> y;

    int A[] = {1,3,5,7,8,10,12};
    int B[] = {4,6,9,11};
    int C[] = {2};

    int hairetu[] = {1,2,3,4,5,6,7,8,9,10,11,12};

    int cnt  = 0;
    int cnt2 = 0;
    for(int i=0; i<12; i++){
        if((x == 1) || (x == 3) || (x == 5) || (x == 7) || (x == 8) || (x ==10) || (x == 12)){
            cnt = 1;
         }
        if((y == 1) || (y == 3) || (y == 5) || (y == 7) || (y == 8) || (y ==10) || (y == 12)){
            cnt2 = 1;
         }
        if((x == 4) || (x == 6) || (x == 9) || (x == 11)){
            cnt = 2;
         }
        if((y == 4) || (y == 6) || (y == 9) || (y == 11)){
            cnt2 = 2;
         }
         if((x == 2)){
            cnt = 3;
         }

         if((y == 2)){
            cnt2 = 3;
         }
    }

    if( cnt == cnt2 ){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}