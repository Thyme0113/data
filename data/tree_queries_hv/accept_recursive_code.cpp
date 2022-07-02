#include<bits/stdc++.h>
using namespace std;
constexpr int N=2e5+5;
int n,d[N],ans[N];
vector<int>v[N];
void dfs(int x,int f)
{
	int sum=0;
	for(int i:v[x])
		if(i!=f)
		{
			dfs(i,x);
			ans[x]+=ans[i];
			if(ans[i]==0)
				sum++;
		}
	ans[x]+=max(0,sum-1);
}
void work()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		ans[i]=d[i]=0,v[i].clear();
	for(int i=1,x,y;i<n;i++)
		scanf("%d%d",&x,&y),
		v[x].push_back(y),
		v[y].push_back(x),d[x]++,d[y]++;
	for(int i=1;i<=n;i++)
		if(d[i]>=3)
		{
			dfs(i,0);
			printf("%d\n",ans[i]);
			return;
		}
	printf("%d\n",(n==1)?0:1);
}
int main()
{
	int T;scanf("%d",&T);
	while(T--)work();
}