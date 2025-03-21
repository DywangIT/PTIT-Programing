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
        unordered_map<int, int> box;
        for (int i = 0; i < n; i++)
            ++box[a[i]];
        int ok = 0;
        for (int i = 0; i < n; i++)
        {
            if (box[a[i]] > 1)
            {
                cout << a[i] << endl;
                ok = 1;
                break;
            }
        }
        if (!ok)
            cout << "NO" << endl;
    }

    return 0;
}
