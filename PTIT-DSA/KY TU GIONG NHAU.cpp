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

void input()
{
    cin >> n >> x >> y >> z;
}

void solve()
{
    int dp[n + 5] = {};
    dp[1] = x;
    for (int i = 2; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            dp[i] = min(dp[i - 1] + x, dp[i / 2] + z);
        }
        else
            dp[i] = min(dp[i - 1] + x, dp[(i + 1) / 2] + y + z);
    }
    cout << dp[n];
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
