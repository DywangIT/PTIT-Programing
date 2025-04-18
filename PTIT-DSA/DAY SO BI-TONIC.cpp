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
vector<int> v;

void input()
{
    cin >> n;
    v.resize(n);
    for (int &x : v)
        cin >> x;
}

void solve()
{
    int dpl[n] = {}, dpr[n] = {};
    dpl[0] = v[0];
    dpr[n - 1] = v[n - 1];
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (v[j] < v[i])
                dpl[i] = max(dpl[i], dpl[j]);
        }
        dpl[i] += v[i];
    }
    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[j] < v[i])
                dpr[i] = max(dpr[i], dpr[j]);
        }
        dpr[i] += v[i];
    }
    int res = 0;
    for (int i = 0; i < n; i++)
        res = max(res, dpr[i] + dpl[i] - v[i]);
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
