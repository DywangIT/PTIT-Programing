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

int a, b;
vector<ll> res;

void input() {
    cin >> a >> b;
}

ll to_ll(string a) {
    ll ans = 0;
    for (char c : a) {
        ans = ans * 10 + c - '0';
    }
    return ans;
}

void prepare() {
    queue<string> Q;
    Q.push("4");
    Q.push("7");
    while (!Q.empty()) {
        string top = Q.front();
        Q.push(top + "4");
        Q.push(top + "7");
        Q.pop();
        if (top.size() > 9) break;
        res.push_back(stoll(top));
    }
    sort(all(res));
}

void solve() {
    ll cur = *lower_bound(all(res), a);
    int nidx = lower_bound(all(res), a) - res.begin() + 1;
    ll ans = 0;
    for (int i = a; i <= b; i++) {
        if (i > cur) {
            cur = res[nidx];
            nidx++;
        }
        ans += cur;
    }
    cout << ans;
}

void testCase() {
    input();
    solve();
}

int main() {
    faster();
    prepare();
    int t = 1;
    // cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
    return 0;
}
