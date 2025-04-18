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
string s;

void input() {
    cin >> n >> s;
}

void solve() { // xanh trang do
    int x = count(s.begin(), s.end(), 'X');
    int t = count(s.begin(), s.end(), 'T');
    int d = count(s.begin(), s.end(), 'D');

    int t_in_x = count(s.begin(), s.begin() + x, 'T');
    int d_in_x = count(s.begin(), s.begin() + x, 'D');
    int x_in_t = count(s.begin() + x, s.begin() + x + t, 'X');
    int d_in_t = count(s.begin() + x, s.begin() + x + t, 'D');
    int x_in_d = count(s.begin() + x + t, s.end(), 'X');
    int t_in_d = count(s.begin() + x + t, s.end(), 'T');

    int res = 0;
    res += min(x_in_t, t_in_x) + min(x_in_d, d_in_x) + min(t_in_d, d_in_t) + (x_in_t + x_in_d - min(x_in_t, t_in_x) - min(x_in_d, d_in_x)) * 2;
    cout << res;
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
