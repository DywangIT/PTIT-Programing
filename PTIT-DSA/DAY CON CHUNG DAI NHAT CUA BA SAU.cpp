#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAXN = 1e6 + 5;
const int MOD = 1e9 + 7;

int x, y, z;
string a, b, c;
void input()
{
    cin >> x >> y >> z >> a >> b >> c;
}

void solve()
{
    vector<vector<vector<int>>> dp(105, vector<vector<int>>(105, vector<int>(105, 0)));

    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= y; j++)
        {
            for (int k = 1; k <= z; k++)
            {
                if (a[i - 1] == b[j - 1] && a[i - 1] == c[k - 1])
                    dp[i][j][k] = dp[i - 1][j - 1][k - 1] + 1;
                else
                    dp[i][j][k] = max({dp[i - 1][j][k], dp[i][j - 1][k], dp[i][j][k - 1], dp[i - 1][j - 1][k], dp[i - 1][j][k - 1], dp[i][j - 1][k - 1]});
            }
        }
    }
    cout << dp[x][y][z];
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
