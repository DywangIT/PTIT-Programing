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
        ll a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int pos = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[i] < a[i - 1])
            {
                pos = i;
                break;
            }
        }

        cout << pos << endl;
    }
    return 0;
}
