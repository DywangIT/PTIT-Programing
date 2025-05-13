#include<bits/stdc++.h>
using namespace std;
const int INF = 1e9;

int n, m, q;
vector<vector<int>> dist;

void floyd() {

    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (dist[i][k] < INF && dist[k][j] < INF) dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }
}

void testcase() {
    cin >> n >> m;
    dist.assign(n + 1, vector<int>(n + 1, INF));
    for (int i = 1; i <= n; i++) dist[i][i] = 0;
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        dist[u][v] = w;
        dist[v][u] = w;
    }
    floyd();
    cin >> q;
    while (q--) {
        int u, v;
        cin >> u >> v;
        cout << dist[u][v] << endl;
    }
}

int main() {
    int t = 1;
    // cin >> t;
    while (t--) {
        testcase();
        cout << '\n';
    }
    return 0;
}