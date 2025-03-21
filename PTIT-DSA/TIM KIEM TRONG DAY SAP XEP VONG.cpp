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
        int n, x;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<int> v;
        for (int i = 1; i < n; i++)
        {
            if (a[i] < a[i - 1])
            {
                for (int j = i; j < n; j++)
                    v.push_back(a[j]);
                break;
            }
        }
        if (v.empty() || a[0] < x)
            cout << lower_bound(a, a + n, x) - a + 1;
        else
            cout << lower_bound(v.begin(), v.end(), x) - v.begin() + n - v.size() + 1;
        cout << endl;
    }
    return 0;
}