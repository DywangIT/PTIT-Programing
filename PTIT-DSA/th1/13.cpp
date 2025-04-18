#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAXN = 1e6 + 5;
const int MOD = 1e9 + 7;

int n, u, v;
vector<ll> a;

void input() {
    cin >> n >> u >> v;
    a.resize(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
}

void solve() {
    vector<ll> prefix(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        prefix[i] = prefix[i - 1] + a[i];
    }

    ll res = LLONG_MIN;
    deque<int> dq;

    for (int r = u; r <= n; ++r) {
        int lmin = max(0, r - v);
        int lmax = r - u;

        while (!dq.empty() && dq.front() < lmin) dq.pop_front();

        while (!dq.empty() && prefix[dq.back()] >= prefix[lmax]) dq.pop_back();
        dq.push_back(lmax);

        res = max(res, prefix[r] - prefix[dq.front()]);
    }
    cout << res;
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
