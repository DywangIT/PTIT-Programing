#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e6 + 5;

int n, k;
vector<string> res;

int check(string s)
{
    int cnts = 0;
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        while (s[i] == '0' && i < n)
        {
            ++cnt;
            ++i;
        }
        if (cnt == k)
            ++cnts;
        if (cnt > k)
            return 0;
    }
    if (cnts == 1)
    {
        res.push_back(s);
        return 1;
    }
    return 0;
}

void testCase()
{
    cin >> n >> k;
    int ans = 0;
    int total = 1 << n;
    for (int i = 0; i < total; i++)
    {
        string s = bitset<16>(i).to_string().substr(16 - n);
        ans += check(s);
    }
    cout << ans << endl;
    sort(res.begin(), res.end());
    for (int i = 0; i < res.size(); i++)
    {
        for (auto x : res[i])
        {
            if (x == '0')
                cout << 'A';
            else
                cout << 'B';
        }
        cout << endl;
    }
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
