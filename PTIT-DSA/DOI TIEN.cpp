#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e6 + 5;

int n, s, ans;
vector<int> a;
vector<int> v;
vector<vector<int>> res;

void laytien(int i, int value, int res_cur)
{
    if (i == n || value >= s || res_cur > ans)
    {
        if (value == s)
            ans = min(ans, res_cur);
        return;
    }
    laytien(i + 1, value, res_cur);
    laytien(i + 1, value + a[i], res_cur + 1);
}

void testCase()
{
    cin >> n >> s;
    a.clear();
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    ans = INT_MAX;
    laytien(0, 0, 0);
    cout << (ans != INT_MAX ? ans : -1);
}

int main()
{
    faster();
    // int t;
    // cin >> t;
    // while (t--)
    // {
    testCase();
    cout << endl;
    // }
    return 0;
}
