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
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int sum = accumulate(a, a + n, 0);
        int dp[n] = {};
        dp[0] = a[0];
        for (int i = 1; i < n; i++)
            dp[i] = dp[i - 1] + a[i];

        int ok = 0;
        for (int i = 0; i < n; i++)
        {
            if (dp[i] - a[i] == sum - dp[i])
            {
                ok = 1;
                cout << i + 1 << endl;
                break;
            }
        }
        if (!ok)
            cout << -1 << endl;
    }

    return 0;
}
