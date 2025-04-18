#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAXN = 1e6 + 5;
const int MOD = 1e9 + 7;

int n, k;
vector<ll> v;

void input() {
    cin >> n >> k;
    v.resize(n);
    for (ll& x : v) cin >> x;
}

void solve() {
    sort(v.begin(), v.end());

    vector<ll> b(n);
    int group_size = n / k;
    int index = 0;

    for (int i = 0; i < k; i++) {
        for (int j = 0; j < group_size; ++j) {
            b[j * k + i] = v[index++];
        }
    }

    ll res = 0;
    for (int i = 0; i < n - k; i++) res += abs(b[i] - b[i + k]);
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
