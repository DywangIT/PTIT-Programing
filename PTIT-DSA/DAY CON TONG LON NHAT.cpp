#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAXN = 1e6 + 5;
const int MOD = 1e9 + 7;

int n, q;

void input()
{
    cin >> n >> q;
    vector<int> v(n);
    for (int &x : v)
        cin >> x;
    int dp[n] = {};
    dp[0] = max(dp[0], dp[0] + v[0]);
    for (int i = 1; i < n; i++)
        dp[i] = max(dp[i - 1] + v[i], dp[i - 1]);
    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        --l;
        --r;
        if (l == 0)
            cout << dp[r];
        else
            cout << dp[r] - dp[l - 1];
        cout << endl;
    }
}

void testCase()
{
    input();
}

int main()
{
    faster();
    int t = 1;
    // cin >> t;
    while (t--)
    {
        testCase();
        cout << endl;
    }
    return 0;
}
