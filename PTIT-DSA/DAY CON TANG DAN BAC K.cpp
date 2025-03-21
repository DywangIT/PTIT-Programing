#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e6 + 5;

int n, k, a[MAX_N];

int check(string s)
{
    int cnt = 0;
    vector<int> v;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            ++cnt;
            v.push_back(a[i]);
        }
    }
    if (cnt != k)
        return 0;
    for (int i = 0; i < k; i++)
    {
        if (v[i] >= v[i + 1] && i + 1 < k)
            return 0;
    }
    return 1;
}

void testCase()
{
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int ans = 0;
    int total = 1 << n;
    for (int i = 0; i < total; i++)
    {
        string s = bitset<16>(i).to_string().substr(16 - n);
        ans += check(s);
    }
    cout << ans;
}

int main()
{
    faster();
    // int t;
    // cin >> t;
    // while (t--)
    // {
    testCase();
    // }
    return 0;
}
