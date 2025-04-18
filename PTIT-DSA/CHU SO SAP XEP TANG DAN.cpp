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

void input()
{
    cin >> n;
}

void solve()
{
    vector<vector<int>> dp(n + 1, vector<int>(10, 0));

    for (int i = 0; i <= 9; i++)
        dp[1][i] = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= 9; j++)
        {
            for (int k = 0; k <= j; k++)
            {
                dp[i][j] = (dp[i][j] + dp[i - 1][k]) % MOD;
            }
        }
    }
    int res = 0;
    for (int i = 0; i <= 9; i++)
        res = (res + dp[n][i]) % MOD;
    cout << res % MOD;
}

void testCase()
{
    input();
    solve();
}

int main()
{
    faster();
    int t = 1;
    cin >> t;
    while (t--)
    {
        testCase();
        cout << endl;
    }
    return 0;
}
