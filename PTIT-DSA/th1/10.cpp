#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAXN = 1e6 + 5;
const int MOD = 1e9 + 7;

int n;
vector<ll> a, b;

void input() {
    cin >> n;
    a.resize(n);
    b.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }
}

void solve() {
    vector<vector<ll>> dp(n, vector<ll>(3, LLONG_MAX));

    for (int j = 0; j < 3; j++) dp[0][j] = j * b[0];

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            ll curr_val = a[i] + j;
            for (int k = 0; k < 3; k++) {
                ll prev_val = a[i - 1] + k;
                if (curr_val != prev_val && dp[i - 1][k] != LLONG_MAX) {
                    dp[i][j] = min(dp[i][j], dp[i - 1][k] + j * b[i]);
                }
            }
        }
    }

    ll res = min({ dp[n - 1][0], dp[n - 1][1], dp[n - 1][2] });
    cout << res;
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
