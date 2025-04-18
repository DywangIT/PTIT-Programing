#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAXN = 1e6 + 5;
const int MOD = 1e9 + 7;

string a, b;

void input()
{
    cin >> a >> b;
}

int lcsRec(string &a, string &b, int n, int m, vector<vector<int>> &memo)
{
    if (n == 0 || m == 0)
        return 0;
    if (memo[n][m] != -1)
        return memo[n][m];
    if (a[n - 1] == b[m - 1])
        return memo[n][m] = 1 + lcsRec(a, b, n - 1, m - 1, memo);
    return memo[n][m] = max(lcsRec(a, b, n, m - 1, memo), lcsRec(a, b, n - 1, m, memo));
}

int lcs(string &a, string &b)
{
    int n = a.size(), m = b.size();
    vector<vector<int>> memo(n + 1, vector<int>(m + 1, -1));
    return lcsRec(a, b, n, m, memo);
}

void testCase()
{
    input();
    cout << lcs(a, b);
}

int main()
{
    faster();
    int t = 1;
    cin >> t;
    while (t--)
    {
        testCase();
        cout << endl;
    }
    return 0;
}
