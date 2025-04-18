#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void solve()
{
    int n, vmax;
    cin >> n >> vmax;
    vector<int> v(n), val(n);
    for (int &x : v)
        cin >> x;
    for (int &x : val)
        cin >> x;

    vector<int> dp(vmax + 1, 0);

    for (int i = 0; i < n; i++)
    {
        for (int j = vmax; j >= v[i]; j--)
        {
            dp[j] = max(dp[j], dp[j - v[i]] + val[i]);
        }
    }

    cout << dp[vmax];
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << '\n';
    }
    return 0;
}
