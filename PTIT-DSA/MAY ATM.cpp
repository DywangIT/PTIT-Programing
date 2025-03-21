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

void laytien(int idx, int sumcur, int cnt)
{
    if (idx == n || sumcur >= s || cnt > ans)
    {
        if (sumcur == s)
        {
            ans = min(ans, cnt);
        }
        return;
    }
    laytien(idx + 1, sumcur, cnt);
    laytien(idx + 1, sumcur + a[idx], cnt + 1);
}

void testCase()
{
    cin >> n >> s;
    a.resize(n);
    for (auto &x : a)
        cin >> x;
    ans = INT_MAX;
    laytien(0, 0, 0);
    cout << (ans != INT_MAX ? ans : -1);
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
