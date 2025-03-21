#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

int count(vector<int> &b, int m, int x, int c[])
{
    if (x == 0)
        return 0;
    if (x == 1)
        return c[0];

    auto total = b.end() - upper_bound(b.begin(), b.end(), x);

    total += c[0] + c[1];

    if (x == 2)
        total -= c[3] + c[4];
    if (x == 3)
        total += c[2];

    return total;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for (auto &x : a)
            cin >> x;
        for (auto &x : b)
            cin >> x;
        sort(b.begin(), b.end());

        int c[5] = {};
        for (auto x : b)
        {
            if (x < 5)
                ++c[x];
        }
        int ans = 0;
        for (auto x : a)
        {
            ans += count(b, m, x, c);
        }
        cout << ans << "\n";
    }
    return 0;
}