#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 2e5+5;
vector<int> tr[N];
vector<int> leaf;
vector<bool> seen;
int n;

void solve() {
    cin >> n;
    for (int i = 1; i <= n; i++) tr[i].clear();
    for (int i = 0; i < n - 1; i ++) {
        int x, y;
        cin >> x >> y;
        tr[x].push_back(y);
        tr[y].push_back(x);
    }
    leaf.clear();
    seen.assign(n + 1, 0);
    for (int i = 1; i <= n; i++) if (tr[i].size() <= 1) leaf.push_back(i);
    if (leaf.size() <= 2) {
        cout << leaf.size() - 1 << '\n';
        return;
    }
    set<int> s;
    vector<int> ci(n + 1);
    for (int x : leaf) {
        int y = x;
        while (tr[y].size() <= 2) {
            seen[y] = 1;
            // dbg(tr[y]);
            // if (tr[y].empty()) dbg(y);
            if (seen[tr[y][0]]) y = tr[y][1];
            else y = tr[y][0];
        }
        s.insert(y);
        ci[y] += 1;
    }
    // dbg(s);
    // dbg(ci);
    int ct = 0;
    for (int x : s) ct += ci[x] - 1;
    cout << ct << '\n';
}

signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0);
    int T; cin >> T; while (T--) solve();
}s