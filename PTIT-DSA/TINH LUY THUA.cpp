#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MOD = 1e9 + 7;

ll powMod(ll a, ll b)
{
    if (b == 0)
        return 1;
    ll res = powMod(a, b / 2);
    res = (res * res) % MOD;
    if (b % 2)
        res = (res * a) % MOD;
    return res;
}

void testCase()
{
    while (true)
    {
        ll a, b;
        cin >> a >> b;
        if (a == 0 && b == 0)
            break;
        cout << powMod(a, b) << endl;
    }
}

int main()
{
    faster();
    int t;
    // cin >> t;
    t = 1;
    while (t--)
    {
        testCase();
        cout << endl;
    }
    return 0;
}
