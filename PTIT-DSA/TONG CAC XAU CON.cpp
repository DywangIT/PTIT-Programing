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
    ll n = s.size(), dp[n] = {};
    dp[0] = s[0] - '0';
    for (int i = 1; i < n; i++)
    {
        dp[i] = dp[i - 1];
        for (int j = 0; j <= i; j++)
        {
            dp[i] += stoll(s.substr(j, i - j + 1));
        }
    }
    cout << dp[n - 1];
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
