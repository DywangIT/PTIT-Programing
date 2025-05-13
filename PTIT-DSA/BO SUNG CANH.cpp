#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100005;
vector<int> adj[MAXN];
bool visited[MAXN];
int component[MAXN];
int sizeComp[MAXN];
int n, m;

void dfs(int u, int label) {
    visited[u] = true;
    component[u] = label;
    sizeComp[label]++;
    for (int v : adj[u]) {
        if (!visited[v]) {
            dfs(v, label);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    while (m--) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int compId = 0;
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            ++compId;
            dfs(i, compId);
        }
    }

    int baseComp = component[1];
    int baseSize = sizeComp[baseComp];
    int maxExtra = 0;

    for (int i = 1; i <= compId; i++) {
        if (i != baseComp) {
            maxExtra = max(maxExtra, sizeComp[i]);
        }
    }

    cout << baseSize + maxExtra << '\n';
    return 0;
}
