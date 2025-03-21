#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int M = 123456789;

ll n;

ll powMod(ll x, ll y)
{
    if (y == 1)
        return x % M;
    ll a = powMod(x, y / 2);
    a = (a * a) % M;
    if (y % 2)
        return (a * x) % M;
    return a % M;
}

void testCase()
{
    cin >> n;
    cout << powMod(2, n - 1);
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
