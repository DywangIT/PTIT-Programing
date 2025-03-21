#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define maxn 1e6 + 5

int main()
{
    faster();
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        vector<int> v(m + n);

        for (auto &x : v)
            cin >> x;
        sort(v.begin(), v.end());
        for (auto x : v)
            cout << x << ' ';
        cout << endl;
    }
    return 0;
}