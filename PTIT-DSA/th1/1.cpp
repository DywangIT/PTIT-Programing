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
vector<vector<int>> res;

ll fi[MAXN];
void prepare() {
    fi[0] = 1;
    fi[1] = 1;
    for (int i = 2; i < 93; i++) fi[i] = fi[i - 1] + fi[i - 2];
}

void input() {
    cin >> n;
    vector<int> v(n);
    iota(v.begin(), v.end(), 1);
    res.push_back({});
    do {
        res.push_back(v);
    } while (next_permutation(v.begin(), v.end()));
    for (int i = 1; fi[i] < res.size(); i++) {
        cout << fi[i] << ": ";
        for (auto x : res[fi[i]]) cout << x << " ";
        cout << endl;
    }
}

void solve() {

}

void testCase() {
    input();
    solve();
}

int main() {
    prepare();
    faster();
    int t = 1;
    // cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
    return 0;
}
