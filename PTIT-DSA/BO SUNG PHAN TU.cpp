#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define maxn 1e6 + 5

int main()
{
    faster();
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        set<int> se;
        for (auto &x : a)
        {
            cin >> x;
            se.insert(x);
        }

        cout << *se.rbegin() - *se.begin() + 1 - se.size() << endl;
    }
    return 0;
}