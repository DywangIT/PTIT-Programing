#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MOD = 1e9 + 7;

ll n, k;

ll powMod()
{
    ll res = 1;
    while (k > 0)
    {
        if (k % 2)
        {
            res = (res * n) % MOD;
        }
        n = (n * n) % MOD;
        k /= 2;
    }
    return res % MOD;
}

void testCase()
{
    cin >> n >> k;
    cout << powMod();
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
