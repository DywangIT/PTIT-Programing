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
vector<int> v;


void input() {
    cin >> n;
    v.resize(n);
    for (int& x : v) cin >> x;
}

void solve() {
    vector<int> l(n), r(n);
    stack<int> s;

    for (int i = 0; i < n; i++) {
        while (!s.empty() && v[s.top()] < v[i]) s.pop();
        l[i] = s.empty() ? (i + 1) : (i - s.top());
        s.push(i);
    }

    while (!s.empty()) s.pop();

    for (int i = n - 1; i >= 0; i--) {
        while (!s.empty() && v[s.top()] <= v[i]) s.pop();
        r[i] = s.empty() ? (n - i) : (s.top() - i);
        s.push(i);
    }

    ll total = 0;
    for (int i = 0; i < n; i++) {
        total += 1ll * v[i] * l[i] * r[i];
    }

    cout << total;
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
