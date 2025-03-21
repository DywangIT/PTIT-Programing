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
        int n;
        cin >> n;
        int a[n];
        for (auto &x : a)
            cin >> x;

        sort(a, a + n);
        int min1_n = a[0], min2_n = a[0];
        for (int i = 1; i < n; i++)
        {
            if (a[i] != min2_n)
            {
                min2_n = a[i];
                break;
            }
        }
        if (min1_n != min2_n)
            cout << min1_n << " " << min2_n << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}