#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e6 + 5;
const int MOD = 1e9 + 7;

ll n, k;
vector<int> a;
vector<int> v;
vector<vector<int>> res;
string s;

ll solve(ll n, ll m)
{
    if (m == 0)
        return 1;
    ll x = solve(n, m / 2);
    if (m % 2 == 0)
        return x * x % MOD;
    return n * (x * x % MOD) % MOD;
}

void testCase()
{
    while (true)
    {
        cin >> n >> k;
        if (n == 0 && k == 0)
            return;
        cout << solve(n, k) << endl;
    }
}

int main()
{
    faster();
    // int t;
    // cin >> t;
    // while (t--)
    // {
    testCase();
    // }
    return 0;
}
