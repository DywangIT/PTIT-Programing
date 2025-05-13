#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;

int n, m, st;
vector<vector<pii>> adj;
vector<int> dist;

void dijkstra() {
    priority_queue<pii, vector<pii>, greater<pii>> Q;
    Q.push({ 0, st });
    while (!Q.empty()) {
        int d = Q.top().first;
        int cur = Q.top().second;
        Q.pop();
        if (d > dist[cur]) continue;

        for (auto& next : adj[cur]) {
            int v = next.first;
            int w = next.second;
            if (dist[cur] + w < dist[v]) {
                dist[v] = dist[cur] + w;
                Q.push({ dist[v], v });
            }
        }
    }
    for (int i = 1; i <= n; i++) cout << dist[i] << " ";
}

void testcase() {
    cin >> n >> m >> st;
    adj.assign(n + 1, {});
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({ v, w });
        adj[v].push_back({ u, w });
    }
    dist.assign(n + 1, INT_MAX);
    dist[st] = 0;
    dijkstra();
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        testcase();
        cout << endl;
    }
    return 0;
}