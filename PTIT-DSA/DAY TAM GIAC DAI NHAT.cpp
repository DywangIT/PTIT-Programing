#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define maxn 1e6 + 5

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.first < b.first;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int res = 0;
        for (int i = 0; i < n; i++)
        {
            // cout << "i:" << i << " ";
            int l1 = 0, l2 = 0;
            while (i + 1 < n && a[i + 1] > a[i])
            {
                ++l1;
                ++i;
            }
            while (i + 1 < n && a[i + 1] < a[i])
            {
                ++l2;
                ++i;
            }
            // cout << "l1:" << l1 << " " << "l2:" << l2 << endl;
            if (l1)
                res = max(res, l1 + l2 + 1);
            if (l1 || l2)
                --i;
        }
        cout << res << endl;
    }

    return 0;
}