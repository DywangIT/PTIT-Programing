#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAXN = 1e6 + 5;
const int MOD = 1e9 + 7;

int n, k;
vector<int> v;

void input()
{
    cin >> n >> k;
    v.resize(n);
    for (int &x : v)
        cin >> x;
}

void solve()
{
    int dp[k + 1] = {};
    dp[0] = 1;
    for (int x = 1; x <= k; x++)
    {
        for (int i = 0; i < n; i++)
        {
            if (x >= v[i])
                dp[x] = (dp[x] + dp[x - v[i]]) % MOD;
        }
    }
    cout << dp[k] % MOD;
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
