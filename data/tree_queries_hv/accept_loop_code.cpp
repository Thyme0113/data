#include<bits/stdc++.h>
#define int long long
using namespace std;
const int inf = 1E9;
void solve(){
	int n;
	cin>>n;
	vector<vector<int> > a(n);
	for(int i = 1; i < n; i++){
		int x,y;
		cin>>x>>y;
		x--;
		y--;
		a[x].push_back(y);
		a[y].push_back(x);
	}
	if(n==1){
		cout<<0<<endl;
		return;
	}else if(all_of(a.begin(),a.end(),[&] (auto hh){return hh.size()<=2;})){
		cout<<1<<endl;
		return;
	}
	int ans = 0;
	vector<bool> vis(n);
	for(int i = 0; i < n; i++){
		if(a[i].size()==1){
			ans++;
			int j = a[i][0]; int k = i;
			while(a[j].size()<=2){
				k ^= a[j][0]^a[j][1];
				swap(j,k); 
			}
			if(!vis[j]){
				vis[j]=true;
				ans--;
			}
		}
	}
	cout<<ans<<endl;
}
signed main(){
	int t;
	cin>>t;
	while(t--)
	solve(); 
	return 0;
} 