#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAXN = 1e6 + 5;
const int MOD = 1e9 + 7;

string s;

void input()
{
    cin >> s;
}

void solve()
{
    int n = s.size(), maxLen = 1;
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
    for (int i = 0; i < n; i++)
        dp[i][i] = 1;

    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            dp[i][i + 1] = 1;
            maxLen = 2;
        }
    }

    for (int len = 3; len <= n; len++)
    {
        for (int i = 0; i < n; i++)
        {
            int j = i + len - 1;
            if (dp[i + 1][j - 1] && s[i] == s[j])
            {
                dp[i][j] = 1;
                maxLen = max(maxLen, len);
            }
        }
    }
    cout << maxLen;
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
