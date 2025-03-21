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
        int n, k, cnt = 0;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        unordered_map<int, int> ump;
        for (auto x : a)
        {
            int y = k - x;
            if (ump[y])
                cnt += ump[y];
            ++ump[x];
        }
        cout << cnt << endl;
    }
    return 0;
}