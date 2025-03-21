#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e6 + 5;

int n, m, k, ans;
vector<vector<int>> a;
vector<bool> vis;
vector<vector<int>> res;

void dithanhpho(int curprice, int cnt, int curCity)
{
    if (curprice >= ans)
        return;
    if (cnt == n)
    {
        curprice += a[curCity][0];
        ans = min(ans, curprice);
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            vis[i] = true;
            dithanhpho(curprice + a[curCity][i], cnt + 1, i);
            vis[i] = false;
        }
    }
}

void testCase()
{
    cin >> n;
    a.assign(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    ans = 0;
    for (int i = 0; i < n - 1; i++)
        ans += a[i][i + 1];
    ans += a[n - 1][0];
    vis.resize(n, false);
    vis[0] = true;

    dithanhpho(0, 1, 0);

    cout << ans;
}

int main()
{
    faster();
    // int t;
    // cin >> t;
    // while (t--)
    // {
    testCase();
    cout << endl;
    // }
    return 0;
}
