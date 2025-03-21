#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define maxn 1e6 + 5

ll x_of_arr(ll a[], ll n, string x)
{
    sort(a, a + n);
    if (x == "max")
        return a[n - 1];
    return a[0];
}

int main()
{
    faster();
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll a[n], b[m];
        for (ll i = 0; i < n; i++)
            cin >> a[i];

        for (ll i = 0; i < m; i++)
            cin >> b[i];

        cout << x_of_arr(a, n, "max") * x_of_arr(b, m, "min") << endl;
    }
    return 0;
}