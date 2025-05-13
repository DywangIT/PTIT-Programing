#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100005;
vector<int> adj[MAXN];
int state[MAXN];
bool hasCycle;

void dfs(int u, int par) {
    state[u] = 1;
    for (int v : adj[u]) {
        if (v != par) {
            if (state[v] == 0) {
                dfs(v, u);
                if (hasCycle) return;
            }
            else if (state[v] == 1) {
                hasCycle = true;
                return;
            }
        }
    }
    state[u] = 2;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;


        for (int i = 1; i <= n; i++) {
            adj[i].clear();
            state[i] = 0;
        }
        hasCycle = false;


        for (int i = 0; i < m; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }


        for (int i = 1; i <= n && !hasCycle; i++) {
            if (state[i] == 0)
                dfs(i, i);
        }

        cout << (hasCycle ? "YES" : "NO") << '\n';
    }

    return 0;
}
