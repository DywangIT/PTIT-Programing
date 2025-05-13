#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define all(M) M.begin(), M.end()

const int MAXN = 1e6 + 5;
const int MOD = 1e9 + 7;

int n, m;
vector<vector<int>> adj, rev_adj;
vector<bool> vis;
stack<int> st;

void dfs1(int u) {
    vis[u] = true;
    for (int v : adj[u]) {
        if (!vis[v]) dfs1(v);
    }
    st.push(u);
}

void dfs2(int u) {
    vis[u] = true;
    for (int v : rev_adj[u]) {
        if (!vis[v]) dfs2(v);
    }
}

int kosaraju() {
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) dfs1(i);
    }

    fill(all(vis), false);
    int scc_count = 0;

    while (!st.empty()) {
        int u = st.top();
        st.pop();

        if (!vis[u]) {
            dfs2(u);
            ++scc_count;
        }
    }
    return scc_count;
}

void input() {
    cin >> n >> m;
    adj.assign(n + 1, {});
    rev_adj.assign(n + 1, {});
    vis.assign(n + 1, false);
    while (!st.empty()) st.pop();
    while (m--) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        rev_adj[v].push_back(u);
    }
}

void solve() {
    cout << kosaraju();
}

void testCase() {
    input();
    solve();
}

int main() {
    faster();
    int t = 1;
    // cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
    return 0;
}
