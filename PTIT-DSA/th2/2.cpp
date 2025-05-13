#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int k;
    string s;
    cin >> k >> s;
    int n = s.size();
    int dp[2][205][205] = {};
    dp[0][0][0] = 1;

    for (int i = 0; i < n; i++) {
        int cur = i % 2;
        int nxt = 1 - cur;
        memset(dp[nxt], 0, sizeof dp[nxt]);

        for (int open = 0; open <= n; open++) {
            for (int depth = 0; depth <= k; depth++) {
                if (dp[cur][open][depth] == 0) continue;

                if (s[i] == '(' || s[i] == '?') {
                    int newOpen = open + 1;
                    int newDepth = max(depth, newOpen);
                    if (newDepth <= k) dp[nxt][newOpen][newDepth] = (dp[nxt][newOpen][newDepth] + dp[cur][open][depth]) % MOD;
                }

                if ((s[i] == ')' || s[i] == '?') && open > 0) {
                    dp[nxt][open - 1][depth] = (dp[nxt][open - 1][depth] + dp[cur][open][depth]) % MOD;
                }
            }
        }
    }
    cout << dp[n % 2][0][k] << endl;
    return 0;
}