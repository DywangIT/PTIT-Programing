#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAXN = 1e6 + 5;
const int MOD = 1e9 + 7;

ll fi[MAXN];
int dp[50];
void prepare() {
    fi[0] = 1;
    fi[1] = 1;
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= 49; i++) dp[i] = dp[i - 1] + dp[i - 2];
    for (int i = 2; i < 93; i++) fi[i] = fi[i - 1] + fi[i - 2];
}



int n, k;

void input() {
    cin >> n >> k;
}

int countB(int n, int k) {
    if (n == 0) return 0;
    if (n == 1) return k > 0 ? 1 : 0;

    if (k <= fi[n - 1]) return countB(n - 1, k);
    else return dp[n - 1] + countB(n - 2, k - fi[n - 1]);
}

void solve() {
    cout << countB(n, k);
}

void testCase() {
    input();
    solve();
}

int main() {
    prepare();
    faster();
    int t = 1;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
    return 0;
}
