#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

long long maxmin(long long x, long long y, long long z){
    long long M = max(x, max(y, z));
    long long m = min(x, min(y, z));
    return M - m;
}

int main(){

    long long H, W;
    cin >> H >> W;
    long long result = 0;
    long long S3, S4, S5, S6;

    long long h2, w2;
    long long h3, w3;
    
    if( (H == 3) || (W == 3) ){
        cout << 0 << endl;
    }else{
        h2 = H / 2;
        h3 = H / 3;
        w2 = W / 2;
        w3 = W / 3;

        S3 = maxmin(w3 * H, (W - w3) * h2, (W - w3) * (H - h2));
        S4 = maxmin((w3 + 1) * H, (W - w3 - 1) * h2, (W - w3 - 1) * (H - h2) );
        S5 = maxmin(h3 * W, w2 * (H - h3), (W - w2) * (H - h3));
        S6 = maxmin((h3 + 1) * W, (H - h3 - 1) * w2, (H - h3 - 1) * (W - w2) );
        
        result = min(S3,S4);
        result = min(result,S5);
        result = min(result,S6);

        cout << result << endl;   

    }

    return 0;
}