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

        sort(a, a + n);
        int min_distance = 1e9;
        for (int i = 1; i < n; i++)
            min_distance = min_distance < a[i] - a[i - 1] ? min_distance : a[i] - a[i - 1];
        cout << min_distance << endl;
    }
    return 0;
}
