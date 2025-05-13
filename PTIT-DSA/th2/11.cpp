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

int n, m, q;
vector<vector<int>> dist;

void floyd() {
    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (dist[i][k] < INT_MAX && dist[k][j] < INT_MAX) 
                dist[i][j] = min(dist[i][j], max(dist[i][k], dist[k][j]));
            }
        }
    }
}

void input() {
    cin >> n >> m >> q;
    dist.assign(n + 1, vector<int>(n + 1, INT_MAX));
    for (int i = 1; i <= n; i++) dist[i][i] = 0;
    while (m--) {
        int u, v, w;
        cin >> u >> v >> w;
        dist[u][v] = w;
    }
    floyd();
    while (q--) {
        int u, v;
        cin >> u >> v;
        if (dist[u][v] == INT_MAX) cout << -1 << endl;
        else cout << dist[u][v] << endl;
    }
}

void solve() {

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
