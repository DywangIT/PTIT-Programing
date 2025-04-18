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
vector<int> st;
vector<int> en;

bool cmp(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
}
void input() {
    cin >> n;
    st.resize(n);
    en.resize(n);
    for (int i = 0; i < n; i++) cin >> st[i];
    for (int i = 0; i < n; i++) cin >> en[i];
}

void solve() {
    vector<pair<int, int>> works;
    for (int i = 0; i < n; i++) works.push_back({ st[i], en[i] });
    sort(works.begin(), works.end(), cmp);
    int cnt = 0, last = 0;
    for (auto x : works) {
        if (x.first >= last) {
            ++cnt;
            last = x.second;
        }
    }
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
