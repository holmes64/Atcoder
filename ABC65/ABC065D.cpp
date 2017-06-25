#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <algorithm>


#define REP(i, x, n) for(int i = x; i < n; i++)
#define rep(i,n) REP(i,0,n)

using namespace std;

typedef long long ll;
typedef pair<int, int> P;
const int MAX_N = 100007;

struct uft{
    int par[MAX_N], rank[MAX_N], size[MAX_N];
    void init(int n){
        rep(i,n){
            par[i] = i;
            rank[i] = 0;
            size[i] = 1;
        }
        return ;
    }

    int find(int x){
        if(par[x]==x) return x;
        else return par[x] = find(par[x]);
    }

    void unite(int x, int y){
        x = find(x);
        y = find(y);
        if(x == y) return;
        if(rank[x] < rank[y]){
            par[x] = y;
        }else{
            par[y] = x;
            if(rank[x] == rank[y])  ++rank[x];
        }
        size[x] = size[y] = size[x] + size[y];
        return ;
    }

    bool same(int x, int y){
        return find(x) == find(y);
    }
};

uft u;
int n;
P x[MAX_N], y[MAX_N];
pair<int, P> cost[MAX_N*2];
bool used[MAX_N];
ll ans = 0;

int main(){

    int n;
    cin >> n;
    
    u.init(n);
    rep(i,n){
        cin >> x[i].first >> y[i].first;
        x[i].second = y[i].second = i;
    }
    sort(x, x+n);
    sort(y, y+n);
    fill(used, used+n, false);

    pair<int, P> temp;
    rep(i,n-1){
        temp.first = x[i+1].first - x[i].first;
        temp.second = P(x[i].second, x[i+1].second);
        cost[i] = temp;
    }

    rep(i,n-1){
        temp.first = y[i+1].first - y[i].first;
        temp.second = P(y[i].second, y[i+1].second);
        cost[n-1+i] = temp;
    }
    sort(cost, cost+2*(n-1));

    ll ans = 0;

    rep(i, 2*(n-1)){
        int a, b, c;
        c = cost[i].first;
        a = cost[i].second.first;
        b = cost[i].second.second;
        if(u.same(a,b)) continue;
        else{
            ans += ll(c);
            u.unite(a,b);
        }
    }

    cout << ans << endl;

    return 0;

}