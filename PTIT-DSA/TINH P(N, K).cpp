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
}

void solve()
{
    if (k > n)
    {
        cout << 0;
        return;
    }
    ll res = 1;
    for (int i = n; i >= n - k + 1; i--)
        res = (res * i) % MOD;
    cout << res % MOD;
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
