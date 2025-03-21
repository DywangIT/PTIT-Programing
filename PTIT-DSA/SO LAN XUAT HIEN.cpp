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
        unordered_map<int, int> ump;
        for (auto &x : a)
        {
            cin >> x;
            if (x == k)
                ++ump[x];
        }
        if (ump[k])
            cout << ump[k] << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}