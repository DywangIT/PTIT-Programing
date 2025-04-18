#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAXN = 1e6 + 5;
const int MOD = 1e9 + 7;

int n, k;

void input()
{
    cin >> n >> k;
    vector<vector<int>> c(n + 1, vector<int>(k + 1, 0));
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= k && j <= i; j++)
        {
            if (j == 0 || j == i)
                c[i][j] = 1;
            else
                c[i][j] = (c[i - 1][j] + c[i - 1][j - 1]) % MOD;
        }
    }
    cout << c[n][k] % MOD;
}

void testCase()
{
    input();
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
