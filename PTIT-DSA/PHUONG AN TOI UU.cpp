#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e6 + 5;

int n, m, a[MAX_N], b[MAX_N];

ll solve(string s)
{
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            sum += a[i];
    }
    return sum;
}

ll sol(string s)
{
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += (s[i] - '0') * b[i];
    }
    return sum;
}

void testCase()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    ll res = 0;
    string ans;

    int total = 1 << n;
    for (int i = 0; i < total; i++)
    {
        string s = bitset<16>(i).to_string().substr(16 - n);
        ll tmp = solve(s);
        ll trongluong = sol(s);
        // cout << s << " " << tmp << " " << trongluong << endl;
        if (tmp > res && trongluong <= m)
        {
            res = tmp;
            ans = s;
        }
    }
    cout << res << endl;
    for (auto x : ans)
        cout << x << " ";
    cout << endl;
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
