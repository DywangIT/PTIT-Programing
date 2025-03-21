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
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a, a + n);
        ll ans = 0;

        for (int i = 0; i < n - 1; i++)
        {
            int pos = lower_bound(a, a + n, a[i] + k) - a;
            ans += pos - i - 1;
        }
        cout << ans << endl;
    }
    return 0;
}
