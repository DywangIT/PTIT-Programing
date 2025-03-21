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
        int n, x;
        cin >> n >> x;
        int a[n];
        sort(a, a + n);
        for(auto &y : a) cin >> y;

        auto it = binary_search(a, a + n, x);
        if(it) cout << 1 << endl;
        else cout << -1 << endl;
    }
    return 0;
}