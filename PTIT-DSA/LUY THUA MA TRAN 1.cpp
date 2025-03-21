#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MOD = 1e9 + 7;

ll n, k;
vector<vector<ll>> a;

void print(vector<vector<ll>> a)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

vector<vector<ll>> mulMatrix(vector<vector<ll>> &a, vector<vector<ll>> &b)
{
    vector<vector<ll>> res(n, vector<ll>(n, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
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
    cin >> n >> k;
    a.assign(n, vector<ll>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    }

    print(powMod(a, k));
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        testCase();
        // cout << endl;
    }
    return 0;
}
