#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAXN = 1e6 + 5;
const int MOD = 1e9 + 7;

int n, m;
vector<vector<int>> v;
void input()
{
    cin >> n >> m;
    v.clear();
    v.resize(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> v[i][j];
    }
}

void solve()
{
    int maxSize = 0;
    vector<vector<int>> dp(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (v[i][j] == 1)
            {
                if (i == 0 || j == 0)
                    dp[i][j] = v[i][j];
                else
                    dp[i][j] = min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]}) + 1;
                maxSize = max(maxSize, dp[i][j]);
            }
        }
    }
    cout << maxSize;
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
