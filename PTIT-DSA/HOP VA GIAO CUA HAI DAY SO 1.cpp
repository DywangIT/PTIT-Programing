#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

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

        map<int, int> mp;
        for (auto x : a)
            ++mp[x];
        for (auto x : b)
            ++mp[x];

        for (auto x : mp)
            cout << x.first << " ";
        cout << endl;
        for (auto x : mp)
        {
            if (x.second > 1)
                cout << x.first << " ";
        }
        cout << endl;
    }
    return 0;
}