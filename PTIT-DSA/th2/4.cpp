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

int n;
vector<string> res;

void input() {
    cin >> n;
}

bool cmp(string a, string b) {
    if (a.size() != b.size()) return a.size() < b.size();
    return a < b;
}

void prepare() {
    queue<string> Q;
    Q.push("6");
    Q.push("8");
    while (!Q.empty() && res.size() < 10000) {
        string top = Q.front();
        Q.push(top + "6");
        Q.push(top + "8");
        Q.pop();

        string re_top = top;
        reverse(all(re_top));
        // reverse(re_top.begin(), re_top.end());
        res.push_back(top + re_top);
    }
    sort(all(res), cmp);
}

void solve() {
    for (int i = 0; i < n; i++) cout << res[i] << " ";
}

void testCase() {
    input();
    solve();
}

int main() {
    faster();
    prepare();
    int t = 1;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
    return 0;
}
