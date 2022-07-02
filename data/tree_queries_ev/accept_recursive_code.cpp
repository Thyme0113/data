#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int dfs(vector<vector<int>>& x, int r, int c){
    int sum = 0, num = 0;
    for (int i = 0; i < x[r].size(); i++){
        if (x[r][i] != c){
            int temp = dfs(x, x[r][i], r);
            sum += temp;
            if (temp == 0) ++num;
        }
    }
    return sum + max(0, num - 1);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        if (n == 1) cout << 0 << endl;
        else{
            vector<vector<int>> x(n + 1, vector<int>());
            int u, v;
            for (int i = 1; i < n; i++){
                cin >> u >> v;
                x[u].push_back(v);
                x[v].push_back(u);
            }
            int ans = n;
            for (int i = 1; i <= n; i++) ans = min(ans, 1 + dfs(x, i, 0));
            cout << ans << endl;
        }
    }
	return 0;
}