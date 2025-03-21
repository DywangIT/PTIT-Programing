#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e6 + 5;

int n, k;
vector<int> a;

void testCase()
{
    cin >> n >> k;
    a.resize(n);
    for (auto &x : a)
        cin >> x;

    ll cnt = 0;
    sort(a.begin(), a.end());
    for (int i = 0; i < n - 1; i++)
    {
        cnt += upper_bound(a.begin() + i + 1, a.end(), a[i] + k - 1) - a.begin() - i - 1;
    }
    cout << cnt;
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
