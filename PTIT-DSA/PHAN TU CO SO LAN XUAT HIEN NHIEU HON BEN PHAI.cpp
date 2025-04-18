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
    unordered_map<int, int> ump;
    for (int x : v) ++ump[x];

    vector<int> res(n);
    stack<int> st;

    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && ump[st.top()] <= ump[v[i]]) st.pop();
        if (st.empty()) res[i] = -1;
        else res[i] = st.top();
        st.push(v[i]);
    }
    for (int x : res) cout << x << " ";
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
