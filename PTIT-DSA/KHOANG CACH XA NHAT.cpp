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

        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
            v.push_back({a[i], i});
        sort(v.begin(), v.end(), cmp);

        int res = -1e9, min_idx = v[0].second;
        for (int i = 1; i < n; i++)
        {
            res = res > v[i].second - min_idx ? res : v[i].second - min_idx;
            min_idx = min(min_idx, v[i].second);
        }

        cout << res << endl;
    }

    return 0;
}