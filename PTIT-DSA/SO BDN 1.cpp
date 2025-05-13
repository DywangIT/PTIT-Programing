#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAXN = 1e6 + 5;
const int MOD = 1e9 + 7;

ll n, cnt;
void input() {
    cin >> n;
    cnt = 0;
}

void xet(ll x) {
    if (x <= n) {
        ++cnt;
        xet(x * 10);
        xet(x * 10 + 1);
    }
}

void solve() {
    xet(1);
    cout << cnt;
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
