#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAXN = 1e6 + 5;
const int MOD = 1e9 + 7;

int n, s;

void input() {
    cin >> n >> s;
}

string minNum(int n, int s) {
    string ans = "1";
    s -= 1;
    int x = s / 9, y = s % 9;
    ans += string(x, '9');
    if (y) {
        if (ans.size() == n) ans[0] = y + 1 + '0';
        else ans.insert(1, 1, y + '0');
    }
    if (ans.size() < n) {
        ans.insert(1, n - ans.size(), '0');
    }
    return ans;
}

string maxNum(int n, int s) {
    string ans(s / 9, '9');
    int y = s % 9;
    if (y) ans += y + '0';
    if (ans.size() < n) ans.insert(ans.end(), n - ans.size(), '0');
    return ans;
}

void solve() {
    if (s == 0 && n == 1) {
        cout << "0 0";
        return;
    }

    if (n * 9 < s || (s == 0 && n > 1)) {
        cout << "-1 -1";
        return;
    }

    if (s == 1) {
        string res(n, '0');
        res[0] = '1';
        cout << 1 << " " << res;
        return;
    }

    cout << minNum(n, s) << " " << maxNum(n, s);

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
