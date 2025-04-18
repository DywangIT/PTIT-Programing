#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAXN = 1e6 + 5;
const int MOD = 1e9 + 7;

ll dp[10001];
void prepare()
{
    dp[1] = 1;
    int idx2 = 1, idx3 = 1, idx5 = 1;
    for (int i = 2; i < 10001; i++)
    {
        dp[i] = min({dp[idx2] * 2, dp[idx3] * 3, dp[idx5] * 5});
        if (dp[i] == dp[idx2] * 2)
            ++idx2;
        if (dp[i] == dp[idx3] * 3)
            ++idx3;
        if (dp[i] == dp[idx5] * 5)
            ++idx5;
    }
}
int n;

void input()
{
    cin >> n;
    cout << dp[n];
}

void testCase()
{
    input();
}

int main()
{
    faster();
    prepare();
    int t = 1;
    cin >> t;
    while (t--)
    {
        testCase();
        cout << endl;
    }
    return 0;
}
