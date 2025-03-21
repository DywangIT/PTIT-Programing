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

        for (auto x : v)
        {
            if (x == 0)
                cout << x << " ";
        }
        for (auto x : v)
        {
            if (x == 1)
                cout << x << " ";
        }
        for (auto x : v)
        {
            if (x == 2)
                cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}