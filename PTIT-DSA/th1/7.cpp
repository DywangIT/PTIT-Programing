#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAXN = 1e6 + 5;
const int MOD = 1e9 + 7;

int n, x, y, z;

void input() {
    cin >> n >> x >> y >> z;

    vector<pair<int, int>> ranges(n);
    vector<int> salaries;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        ranges[i] = { a, b };
        salaries.push_back(a);
        salaries.push_back(b);
    }
    sort(salaries.begin(), salaries.end());
    salaries.erase(unique(salaries.begin(), salaries.end()), salaries.end());

    ll maxCode = 0;

    for (int s : salaries) {
        ll total = 0;
        for (auto [a, b] : ranges) {
            if (s < a) total += x;
            else if (s > b) total += z;
            else total += y;
        }
        maxCode = max(maxCode, total);
    }
    cout << maxCode;
}


void testCase() {
    input();
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
