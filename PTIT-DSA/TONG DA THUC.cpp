#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAXN = 1e6 + 5;
const int MOD = 1e9 + 7;

string a, b;

void sum(string a, string b) {
    vector<int> v1, v2;
    map<int, int> mp;

    for (int i = 0; i < a.size(); i++) {
        if (isdigit(a[i])) {
            int num = 0;
            while (isdigit(a[i]) && i < a.size()) {
                num = num * 10 + a[i] - '0';
                ++i;
            }
            --i;
            v1.push_back(num);
        }
    }

    for (int i = 0; i < b.size(); i++) {
        if (isdigit(b[i])) {
            int num = 0;
            while (isdigit(b[i]) && i < b.size()) {
                num = num * 10 + b[i] - '0';
                ++i;
            }
            --i;
            v2.push_back(num);
        }
    }
    for (int i = 1; i < v1.size(); i += 2) mp[v1[i]] += v1[i - 1];
    for (int i = 1; i < v2.size(); i += 2) mp[v2[i]] += v2[i - 1];

    vector<pair<int, int>> res;
    for (auto x : mp) res.push_back({ x.first, x.second });
    reverse(res.begin(), res.end());
    for (int i = 0; i < res.size(); i++) {
        cout << res[i].second << "*x^" << res[i].first;
        if (i < res.size() - 1) cout << " + ";
    }
}

void input() {
    getline(cin, a);
    getline(cin, b);
}

void solve() {
    sum(a, b);
}

void testCase() {
    input();
    solve();
}

int main() {
    faster();
    int t = 1;
    cin >> t;
    cin.ignore();
    while (t--) {
        testCase();
        cout << endl;
    }
    return 0;
}
