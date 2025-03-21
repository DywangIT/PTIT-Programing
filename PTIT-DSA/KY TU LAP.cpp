#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e6 + 5;

int n, m, k;
vector<string> a;
vector<vector<int>> v;
vector<vector<int>> res;

int tim(string a, string b)
{
    int cnt = 0;
    for (auto &x : a)
    {
        if (b.find(x) != string::npos)
            ++cnt;
    }
    return cnt;
}

void testCase()
{
    cin >> n;
    a.clear();
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        a.push_back(x);
    }

    v.resize(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            v[i][j] = tim(a[i], a[j]);
        }
    }
    vector<int> idx(n);
    iota(idx.begin(), idx.end(), 0);
    int ans = INT_MAX;
    do
    {
        int lap = 0;
        for (int i = 0; i < n - 1; i++)
        {
            lap += v[idx[i]][idx[i + 1]];
        }
        ans = min(ans, lap);
    } while (next_permutation(idx.begin(), idx.end()));
    cout << ans << endl;
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
