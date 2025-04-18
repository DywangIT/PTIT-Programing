#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAXN = 1e6 + 5;
const int MOD = 1e9 + 7;

int n, V;
vector<int> v, val;

void input()
{
    cin >> n >> V;
    v.resize(n);
    val.resize(n);
    for (int &x : v)
        cin >> x;
    for (int &x : val)
        cin >> x;
}

void solve()
{
    vector<int> dp(V + 1, 0);
    for (int i = 0; i < n; i++)
    {
        for (int j = V; j >= v[i]; j--)
        {
            dp[j] = max(dp[j], dp[j - v[i]] + val[i]);
        }
    }
    cout << dp[V];
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
