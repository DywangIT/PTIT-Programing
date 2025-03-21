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
    if (a.second != b.second)
        return a.second > b.second;
    return a.first < b.first;
}

int main()
{
    faster();
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        vector<pair<int, int>> v;
        unordered_map<int, int> ump;
        for (auto &x : a)
        {
            cin >> x;
            ump[x]++;
        }
        for (auto x : ump)
        {
            v.push_back({x.first, x.second});
        }

        sort(v.begin(), v.end(), cmp);
        for (auto x : v)
        {
            for (int i = 1; i <= x.second; i++)
                cout << x.first << " ";
        }
        cout << endl;
    }
    return 0;
}