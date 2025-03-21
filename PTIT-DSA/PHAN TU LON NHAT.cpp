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
        for (auto &x : a)
            cin >> x;

        sort(a, a + n);
        int i = 0, idx = n - 1;
        while (i < k)
        {
            cout << a[idx--] << " ";
            ++i;
        }
        cout << endl;
    }
    return 0;
}