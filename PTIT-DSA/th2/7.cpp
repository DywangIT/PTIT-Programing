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

int n, m, st;
vector<vector<int>> adj;
vector<bool> vis;
vector<int> par;

void bfs(int st) {
    queue<int> q;
    vis[st] = true;
    q.push(st);

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (int v : adj[u]) {
            if (!vis[v]) {
                vis[v] = true;
                par[v] = u;
                q.push(v);
            }
        }
    }
}

void printPath(int u) {
    if (!vis[u]) {
        cout << "No path" << endl;
        return;
    }

    vector<int> path;
    while (u != -1) {
        path.push_back(u);
        u = par[u];
    }
    reverse(all(path));
    for (int x : path) cout << x << " ";
    cout << endl;
}

void input() {
    cin >> n >> m >> st;
    adj.assign(n + 1, {});
    vis.assign(n + 1, false);
    par.assign(n + 1, -1);
    while (m--) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}

void solve() {
    bfs(st);
    for (int i = 1; i <= n; i++) {
        if (i == st) continue;
        printPath(i);
    }
}

void testCase() {
    input();
    solve();
}

int main() {
    faster();
    int t = 1;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
    return 0;
}
