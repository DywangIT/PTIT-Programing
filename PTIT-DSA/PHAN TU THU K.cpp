#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e6 + 5;

int n, m, k;
vector<int> v;

void testCase()
{
    cin >> n >> m >> k;
    v.resize(m + n);
    for (auto &x : v)
        cin >> x;
    sort(v.begin(), v.end());
    cout << v[k - 1];
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
