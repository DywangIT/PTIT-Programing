#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAXN = 1e6 + 5;
const int MOD = 1e9 + 7;

ll n;

void input() {
    cin >> n;
}

bool equal(string x, string n) {
    int idx = 0;
    for (int i = 0; i < n.size(); i++) {
        if (x[idx] == n[i]) ++idx;
    }
    return idx == x.size();
}

void solve() {
    ll x = cbrt(n);
    for (int i = x; i >= 1; i--) {
        if (equal(to_string(1ll * i * i * i), to_string(n))) {
            cout << 1ll * i * i * i;
            return;
        }
    }
    cout << -1;
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
