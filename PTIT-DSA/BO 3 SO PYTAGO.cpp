#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void check(ll a[], int n)
{
    sort(a, a + n);
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            if (*lower_bound(a, a + n, a[i] + a[j]) == a[i] + a[j])
            {
                cout << "YES" << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
    return;
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
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i] = a[i] * a[i];
        }

        check(a, n);
    }
    return 0;
}
