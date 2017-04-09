#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#define MOD 1000000007
#define rep(i,n)for(int i=0;i<n; i++)
typedef long long ll;

using namespace std;

int main(){

    ll mod = 1000000007;
    int n, m;
    cin >> n >> m;

    ll a=0, b=0;
    // x axis
    rep(i,n){
       ll x;
       scanf("%lld", &x);
       (a += x*(2*i -  n +1)) %= mod; 
    }

    //y axis
    rep(i,m){
       ll y;
       scanf("%lld", &y);
       (b += y*(2*i -  m +1)) %= mod; 
    }

    cout << (a*b) % mod << endl;

    return 0;
}