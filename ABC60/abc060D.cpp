#include <iostream>
#include <string>
#include <vector>
using namespace std;
// Simple Knapsack
// これはちゃんと理解できていない感が強いから後日もう一度やる

int dp[105][305];
int n,W;
int w[1000005],v[1000005];
int d,ans=0;
int main()
{
	int i,j,k;
	scanf("%d%d",&n,&W);
	for(i=1;i<=n;i++)scanf("%d%d",&w[i],&v[i]);
	for(i=0;i<=n;i++)for(j=0;j<=300;j++)dp[i][j]=0;
	for(i=1;i<=n;i++)
		for(j=n;j>0;j--)
			for(k=300;k>=0;k--)
			{
				d=w[i]-w[1];
				if(k<d)break;
				dp[j][k]=max(dp[j][k],dp[j-1][k-d]+v[i]);
			}
	for(i=0;i<=n;i++)for(j=0;j<=300;j++)
		if(1ll*i*w[1]+1ll*j<=1ll*W)ans=max(ans,dp[i][j]);
	printf("%d\n",ans);
	return 0;
}

/*
int main(){
    int N;
    long long W;
    cin >> N >> W;

    long long w[N], v[N];
    for(int i=0; i<N; i++){
        cin >> w[i] >> v[i];
    }

    for(int i=0)

    return 0;
}
*/