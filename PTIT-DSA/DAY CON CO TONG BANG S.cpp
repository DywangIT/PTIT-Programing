#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAXN = 1e6 + 5;
const int MOD = 1e9 + 7;

int n, s;
vector<int> v;

void input()
{
    cin >> n >> s;
    v.resize(n);
    for (int &x : v)
        cin >> x;
}

void solve()
{
    vector<bool> dp(s + 1, false);
    dp[0] = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = s; j >= v[i]; j--)
        {
            if (dp[j - v[i]])
                dp[j] = true;
        }
    }
    if (dp[s])
        cout << "YES";
    else
        cout << "NO";
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
