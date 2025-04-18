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
    vector<ll> dp(n + 1, 0);
    if (n == 1 || n == 2)
    {
        cout << v[n - 1];
        return;
    }
    dp[0] = v[0];
    dp[1] = v[1];
    ll max1 = v[0], max2 = v[1];
    for (int i = 2; i < n; i++)
    {
        dp[i] = max1 + v[i];
        if (max2 > max1)
            max1 = max2;
        if (dp[i] > max2)
            max2 = dp[i];
    }
    cout << *max_element(dp.begin(), dp.end());
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
