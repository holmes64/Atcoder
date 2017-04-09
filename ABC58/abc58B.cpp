#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){

     string O;
     string E; 

     /*cin >> O;
     cin >> E;
     */
     cin >> O >> E; // 複数行にわけなくても一行で書ける

     int term = O.size() + E.size();

     string pass[term];
     int j = 0;
     int k = 0;

     for(int i=0; i<term; i++){
         if((i % 2) == 0 ){
             pass[i] = O[k];
             k += 1;
         }else{
             pass[i] = E[j];
             j += 1;
         }
     }

     for(int i=0; i<term; i++){
        cout << pass[i] <<flush;
     }
     cout << endl;

    return 0;
}
