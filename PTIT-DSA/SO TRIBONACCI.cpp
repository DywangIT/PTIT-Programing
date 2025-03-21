#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const ll MOD = 1e15 + 7;

int n;
ll base[] = {3, 2, 1, 6};
struct matrix
{
    ll F[4][4];
};

ll mulNumber(ll a, ll b)
{
    if (b == 0)
        return 0;
    ll ans = mulNumber(a, b / 2);
    ans = (ans + ans) % MOD;
    if (b % 2)
        ans = (ans + a) % MOD;
    return ans;
}

matrix mulMatrix(matrix a, matrix b)
{
    matrix res;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            res.F[i][j] = 0;
            for (int k = 0; k < 4; k++)
            {
                res.F[i][j] = (res.F[i][j] + mulNumber(a.F[i][k], b.F[k][j])) % MOD;
            }
        }
    }
    return res;
}

matrix powMod(matrix a, int n)
{
    if (n == 1)
        return a;
    matrix res = powMod(a, n / 2);
    res = mulMatrix(res, res);
    if (n % 2)
        res = mulMatrix(res, a);
    return res;
}

void testCase()
{
    cin >> n;
    if (!n)
        cout << 0;
    else if (n == 1)
        cout << 1;
    else if (n == 2)
        cout << 3;
    else if (n == 3)
        cout << 6;
    else
    {
        matrix a, res;
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
                a.F[i][j] = 0;
        }
        a.F[0][0] = a.F[0][1] = a.F[0][2] = a.F[1][0] = a.F[2][1] = a.F[3][0] = a.F[3][1] = a.F[3][2] = a.F[3][3] = 1;
        res = powMod(a, n - 3);
        ll ans = 0;
        for (int i = 0; i < 4; i++)
        {
            ans = (ans + mulNumber(res.F[3][i], base[i])) % MOD;
        }
        cout << ans;
    }
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
