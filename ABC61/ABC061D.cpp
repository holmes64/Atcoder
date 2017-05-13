#include <iostream>
#include <string>
#include <vector>
using namespace std;

// は2の50乗を表す
using ll = long long;
const ll INF = 1LL << 50;

int main(){
    int N, M;
    cin >> N >> M;

    const int NMAX=1000;
    const int MMAX=2000;
    int a[MMAX], b[MMAX];
    ll c[MMAX];

    for(int i=0; i<M; ++i){
        cin >> a[i] >> b[i] >> c[i];
        // 最小化問題と考える
        c[i] = -c[i];    
    }

    // 頂点1の最短距離をdist[1]=0、その他の頂点vの最短距離をdist[v]=∞で初期化
    ll dist[NMAX];

    for(int i=0; i < N; ++i){
        dist[i] = INF;
    }

    dist[0] = 0;
    
    // 最短距離の更新をN-1回繰り返します（経路の長さは最大でN-1であるため）
    for(int loop=0; loop < N-1; ++loop){
        for(int i=0; i<M; ++i){
            if(dist[a[i]-1] == INF) continue;

            if(dist[b[i]-1] > dist[a[i]-1] + c[i]){
                dist[b[i]-1] = dist[a[i]-1] + c[i];
            }
        }
    }

    // 頂点Nの最短距離を表す変数として ans = dist[N]とする。
    ll ans = dist[N-1];

    // 負閉路を検出するための長さNの配列negativeを用意して、falseで初期化する。
    bool negative[NMAX];

    for(int i=0; i<N; ++i){
        negative[i] = false;
    }

   /* 最短距離の更新をN回繰り返す（負閉路の長さは最大でNであるため）。ただし、
      この時更新された頂点biについて、netative[bi]=trueとする。 
      また、netative[ai]がtrueの場合には、netative[bi]をtrueにする。
   */
   for(int loop=0; loop<N; ++loop){
       for(int i=0; i<M; ++i){
           if(dist[a[i]-1] == INF) continue;

           if(dist[b[i]-1] > dist[a[i]-1] + c[i]){
               dist[b[i]-1] = dist[a[i]-1] + c[i];
               negative[b[i] - 1] = true;
           }

           if(negative[a[i]-1] == true){
               negative[b[i]-1] = true;
           }
       }
   }


   /*
    最大化問題を最小化問題として捉えているため、出力は-ans
    この解法の計算量はO(MN)である。
    ∞ > -N min ci となるようにしている
   */
   if(negative[N-1]){
       cout << "inf" << endl;
   }else{
       cout << -ans << endl;
   }

    return 0;
}