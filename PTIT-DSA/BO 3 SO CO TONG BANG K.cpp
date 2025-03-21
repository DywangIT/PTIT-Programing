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
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        ll ans = 0;
        for (int i = 0; i < n - 2; i++)
        {
            if (a[i] > k)
                break;
            for (int j = i + 1; j < n; j++)
            {
                int pos_end = lower_bound(a + j + 1, a + n, k - a[i] - a[j]) - a;
                ans += pos_end - j - 1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}