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

bool cmp(pair<int, int> a, pair<int, int> b) {
    if (a.second == b.second) return a.first > b.first;
    return a.second > b.second;
}

void input() {
    cin >> n;
    int stt;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++) {
        cin >> stt >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end(), cmp);
    pair<int, int> res = { 0, 0 };
    vector<int> times(1e6, 0);
    for (auto x : v) {
        for (int j = x.first; j >= 1; j--) {
            if (!times[j]) {
                times[j] = 1;
                ++res.first;
                res.second += x.second;
                break;
            }
        }
    }
    cout << res.first << " " << res.second;
}

void solve() {

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
