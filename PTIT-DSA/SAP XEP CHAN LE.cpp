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
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    vector<int> c, l;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            c.push_back(a[i]);
        else
            l.push_back(a[i]);
    }

    sort(l.begin(), l.end());
    sort(c.begin(), c.end(), greater<int>());
    for (int i = 0; i < c.size(); i++)
    {
        cout << l[i] << " " << c[i] << " ";
    }
    if (l.size() > c.size())
        cout << l.back();

    return 0;
}
