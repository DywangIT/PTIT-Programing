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

void input()
{
    cin >> n;
    vector<int> v(n);
    for (int &x : v)
        cin >> x;
    int dp[n] = {};
    dp[0] = 1;
    for (int i = 1; i < n; i++)
    {
        int cntmax = 0;
        for (int j = 0; j < i; j++)
        {
            if (v[j] < v[i])
                cntmax = max(cntmax, dp[j]);
        }
        dp[i] = cntmax + 1;
    }
    cout << *max_element(dp, dp + n);
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
