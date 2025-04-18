#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAXN = 1e6 + 5;
const int MOD = 1e9 + 7;
vector<string> res;

int n;
char c;

void input() {
    res.clear();
    cin >> n >> c;
}

bool win(string& s) {
    int max1 = 0, max0 = 0;
    int sz = s.size();
    for (int i = 0; i < sz; i++) {
        if (s[i] == '1') {
            int tmp = 0;
            while (s[i] == '1' && i < sz) {
                ++tmp;
                ++i;
            }
            --i;
            max1 = max(max1, tmp);
        }
        else {
            int tmp = 0;
            while (s[i] == '0' && i < sz) {
                ++tmp;
                ++i;
            }
            --i;
            max0 = max(max0, tmp);
        }
    }
    return max1 >= 5 && max1 > max0;
}

void handle(string& s) {
    if (win(s)) {
        for (auto& x : s) {
            if (x == '1') x = c;
            else {
                if (c == 'X') x = 'O';
                else x = 'X';
            }
        }
        res.push_back(s);
    }
}

void solve() {
    int total = 1 << n;
    for (int i = 0; i < total; i++) {
        string s = bitset<16>(i).to_string().substr(16 - n);
        handle(s);
    }
    sort(res.begin(), res.end());
    for (auto x : res) cout << x << endl;
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
