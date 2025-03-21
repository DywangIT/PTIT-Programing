#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e6 + 5;

ll n, k;
vector<ll> a;

void testCase()
{
    cin >> n >> k;
    a.clear();
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a.push_back(x);
    }
    int pos = upper_bound(a.begin(), a.end(), k) - a.begin();
    if (pos == 0)
        cout << -1;
    else
        cout << pos;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        testCase();
        cout << endl;
    }
    return 0;
}
