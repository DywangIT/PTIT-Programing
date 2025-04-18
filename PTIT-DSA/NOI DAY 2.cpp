#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAXN = 1e6 + 5;
const int MOD = 1e9 + 7;

int n;
vector<ll> v;

void input()
{
    cin >> n;
    v.assign(n, 0);
    for (ll &x : v)
        cin >> x;
}

void solve()
{
    priority_queue<ll, vector<ll>, greater<ll>> q;
    for (ll x : v)
        q.push(x);
    ll res = 0;
    while (q.size() > 1)
    {
        ll a = q.top();
        q.pop();
        ll b = q.top();
        q.pop();
        ll cost = (a + b) % MOD;
        res = (res + cost) % MOD;
        q.push(cost);
    }
    cout << res;
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
