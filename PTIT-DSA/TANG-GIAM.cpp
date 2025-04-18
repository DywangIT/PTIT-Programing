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
vector<pair<double, double>> v;

void input()
{
    cin >> n;
    v.clear();
    for (int i = 1; i <= n; i++)
    {
        double x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
}

void solve()
{
    int dp[n + 1] = {};
    dp[0] = 1;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (v[j].first < v[i].first && v[j].second > v[i].second)
                dp[i] = max(dp[i], dp[j]);
        }
        ++dp[i];
    }
    cout << *max_element(dp, dp + n);
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
