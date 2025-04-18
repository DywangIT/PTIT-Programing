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
    int len = s.size(), dp[len + 1] = {};
    dp[0] = 1;
    dp[1] = 1;
    for (int i = 2; i <= len; i++)
    {
        if (s[i - 1] != '0')
            dp[i] = dp[i - 1];
        int twoDigits = stoi(s.substr(i - 2, 2));
        if (twoDigits >= 1 && twoDigits <= 26 && s[i - 2] != '0')
            dp[i] += dp[i - 2];
    }
    cout << dp[len];
}

void testCase()
{
    input();
    if (s[0] == '0')
    {
        cout << 0;
        return;
    }
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
