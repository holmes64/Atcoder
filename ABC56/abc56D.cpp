#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    long long int c[n], d[n];
    // input a_i cards
    for(int i=0; i<n; i++){
        cin >> c[i];
        d[i] = 0;
    }
    // sort descend
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(c[j] < c[j+1]){
                swap(c[j], c[j+1]);
            }
        }
    }

    for(int i=0; i<n; i++){
        vector<int> hyou;
        long long int list = 0;
        for(int j=i; j<n; j++){
            if(list + c[j] >= k){
                hyou.push_back(j);
                for(int v=0; v < hyou.size(); v++){
                    d[hyou[v]] = 1;
                }
                hyou.resize(0);
            }else{
                hyou.push_back(j);
                list += c[j];
            }
        }
    }

    int ans = 0;

    for(int i=0; i<n; i++){
        if(!d[i]) ans++;
    }

    cout << ans << endl;
    
    return 0;
}