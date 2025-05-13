#include<bits/stdc++.h>
using namespace std;

int n;
vector<vector<int>> C;

void tsp() {
    int total = 1 << n;
    vector<vector<int>> dp(total, vector<int>(n, INT_MAX));

    for (int i = 0; i < n; i++)
        dp[1 << i][i] = 0;

    for (int mask = 0; mask < total; mask++) {
        for (int u = 0; u < n; u++) {
            if (!(mask & (1 << u))) continue;

            for (int v = 0; v < n; v++) {
                if (mask & (1 << v)) continue;

                int next = mask | (1 << v);
                dp[next][v] = min(dp[next][v], dp[mask][u] + C[u][v]);
            }
        }
    }

    int res = INT_MAX;
    for (int i = 0; i < n; i++) res = min(res, dp[total - 1][i]);
    cout << res;
}

void testcase() {
    cin >> n;
    C.assign(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cin >> C[i][j];
    }

    tsp();
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        testcase();
        cout << '\n';
    }
    return 0;
}