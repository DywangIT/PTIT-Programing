#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAXN = 1e6 + 5;
const int MOD = 1e9 + 7;

ll eat[101];
int n;

void pre() {
    eat[0] = 1;
    for (int i = 1; i < 101; i++) {
        eat[i] = 0;
        for (int j = 0; j < i; j++) {
            eat[i] += eat[j] * eat[i - 1 - j];
        }
    }
}

void input() {
    cin >> n;
}

void solve() {
    cout << eat[n];
}

void testCase() {
    input();
    solve();
}

int main() {
    faster();
    pre();
    int t = 1;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
    return 0;
}
