#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAXN = 1e6 + 5;
const int MOD = 1e9 + 7;

int c, n;

void input()
{
    cin >> c >> n;
    vector<int> m(n);
    for (int &x : m)
        cin >> x;
    int dp[c + 1] = {};
    dp[0] = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = c; j >= m[i]; j--)
        {
            if (dp[j - m[i]])
                dp[j] = 1;
        }
    }
    for (int i = c; i >= 0; i--)
    {
        if (dp[i])
        {
            cout << i;
            return;
        }
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
