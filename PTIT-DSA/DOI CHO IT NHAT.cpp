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
        vector<int> v(n);
        for (auto &x : v)
            cin >> x;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            int min_idx = i;
            for (int j = i + 1; j < n; j++)
            {
                if (v[j] < v[min_idx])
                    min_idx = j;
            }
            if (min_idx != i)
            {
                ++cnt;
                swap(v[i], v[min_idx]);
            }
        }
        cout << cnt << endl;
    }
    return 0;
}