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
        vector<int> v(n), vcopy;
        for (auto &x : v)
            cin >> x;
        vcopy = v;
        sort(v.begin(), v.end());

        for (int i = 0; i < n; i++)
        {
            if (v[i] != vcopy[i])
            {
                cout << i + 1 << " ";
                break;
            }
        }

        for (int i = n - 1; i >= 0; i--)
        {
            if (v[i] != vcopy[i])
            {
                cout << i + 1 << " ";
                break;
            }
        }
        cout << endl;
    }
    return 0;
}