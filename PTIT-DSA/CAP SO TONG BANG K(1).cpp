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
        ll n, k;
        cin >> n >> k;
        ll a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        ll ans = 0;
        unordered_map<ll, ll> box;
        for (int i = 0; i < n; i++)
        {
            if (box[k - a[i]])
                ans += box[k - a[i]];
            box[a[i]]++;
        }
        cout << ans << endl;
    }

    return 0;
}