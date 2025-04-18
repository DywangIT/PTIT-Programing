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
vector<int> v;
void input()
{
    cin >> n;
    v.resize(n);
    for (int &x : v)
        cin >> x;
}

void solve()
{
    int dp[n + 1] = {};
    dp[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        if (i == 1)
            dp[i] = max(v[0], v[1]);
        else
        {
            dp[i] = max(dp[i - 2] + v[i], dp[i - 1]);
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
