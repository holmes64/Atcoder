#include <iostream>
#include <vector>
#include <queue>
using namespace std;


int main(){
    int n, m; cin >> n >> m;
    int a, b;

    vector<bool> visit(n+1, false);
    bool ans = false;
    for(int i=0; i<m; i++){
        cin >> a >> b;
        if(a == 1){
            if(visit[b]){
                ans = true;
            }
            visit[b] = true;
        }else if(b == n){
            if(visit[a]){
                ans = true;
            }
            visit[a] = true;
        }
    }

    if(!ans) cout << "IM";
    cout << "POSSIBLE" << endl;

    return 0;
}