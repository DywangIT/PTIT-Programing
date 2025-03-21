#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MOD = 1e9 + 7;

string n;

ll powMod(ll x, ll y)
{
    if (y == 1)
        return x % MOD;
    ll a = powMod(x, y / 2);
    a = (a * a) % MOD;
    if (y % 2)
        return (a * x) % MOD;
    return a;
}

void testCase()
{
    cin >> n;
    ll x = stoll(n);
    reverse(n.begin(), n.end());
    ll y = stoll(n);
    cout << powMod(x, y);
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
