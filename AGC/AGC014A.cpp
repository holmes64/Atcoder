#include <iostream>
using namespace std;

int bunkatu(long long A, long long B, long long C){

  long long rA, rB, rC;
  rA = A;
  rB = B;
  rC = C;

  long long cnt=0;

  while(1){

    if((rA % 2 == 1) || (rB % 2 == 1) || (rC % 2 == 1)){
      return cnt;
    }

    if( (A == B) && (B == C) ){
      return -1;
    }

    A /= 2;
    B /= 2;
    C /= 2;

    rA = B + C;
    rB = A + C;
    rC = A + C;

    cnt++;
  }
}



int main(){

  long long A, B, C;
  cin >> A >> B >> C;
  int cnt=0;
  cnt = bunkatu(A, B, C);

  cout << cnt << endl;

  return 0;
}
