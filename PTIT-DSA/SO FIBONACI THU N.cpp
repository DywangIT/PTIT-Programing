#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MOD = 1e9 + 7;

int n;

vector<vector<ll>> mulMatrix(vector<vector<ll>> &a, vector<vector<ll>> &b)
{
    vector<vector<ll>> res(2, vector<ll>(2, 0));
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
                res[i][j] = (res[i][j] + a[i][k] * b[k][j]) % MOD;
        }
    }
    return res;
}

vector<vector<ll>> powMod(vector<vector<ll>> &a, ll k)
{
    if (k == 1)
        return a;
    vector<vector<ll>> res = powMod(a, k / 2);
    res = mulMatrix(res, res);
    if (k % 2)
        res = mulMatrix(res, a);
    return res;
}

void testCase()
{
    cin >> n;
    if (n == 1)
    {
        cout << 1;
        return;
    }
    vector<vector<ll>> a = {{1, 1}, {1, 0}};
    cout << powMod(a, n - 1)[0][0];
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        testCase();
        cout << endl;
    }
    return 0;
}
