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
        for (auto &x : a)
            cin >> x;
        set<int> se;
        for (auto x : a)
        {
            while (x > 0)
            {
                se.insert(x % 10);
                x /= 10;
            }
        }
        for (auto x : se)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}