#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#define MAXV 100007
using namespace std;

int a[MAXV], b[MAXV];
vector<int> tree[MAXV];
int n;

vector<int> bfs(int s){
    vector<int> dist(n+1, -1); // n+1個の要素を-1で初期化
    queue<int> q;
    q.push(s);
    dist[s] = 0;

    while(!q.empty()){
       int t = q.front(); q.pop();
       for(int i: tree[t]){
           if(dist[i] == -1){
               dist[i] = dist[t]+1;
               q.push(i);
           }
       } 
    }
    return dist;
}


int main(){
    cin >> n;
    int black, white;
    for(int i=1; i<n; i++){
        cin >> black >> white;
        tree[black].push_back(white);
        tree[white].push_back(black);
    }
    
    vector<int> d1 = bfs(1);
    vector<int> d2 = bfs(n);

    int l = 0, r = 0;
    for(int i=1; i<=n; i++){
        if(d1[i] <= d2[i]) l++;
        else r++;
    }

    if(l > r) cout << "Fennec" << endl;
    else if(r >= l) cout << "Snuke" << endl;

    return 0;
}