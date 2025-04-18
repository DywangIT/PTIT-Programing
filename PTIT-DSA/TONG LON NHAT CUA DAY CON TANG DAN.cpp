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
        for (int j = 0; j < i; j++)
        {
            if (v[j] < v[i])
                dp[i] = max(dp[i], dp[j]);
        }
        dp[i] += v[i];
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
