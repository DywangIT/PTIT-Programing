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
vector<int> v;
vector<int> comb;

void input() {
    cin >> n >> k;
    v.resize(n);
    for(int &x : v) cin >> x;
}

void backtrack(int start) {
    if(comb.size() == k) {
        for(int x : comb) cout << x << " ";
        cout << endl;
        return;
    }

    for(int i = start; i < n; i++) {
        comb.push_back(v[i]);
        backtrack(i + 1);
        comb.pop_back();
    }
}

void solve() {
    sort(v.begin(), v.end());
    backtrack(0);
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
