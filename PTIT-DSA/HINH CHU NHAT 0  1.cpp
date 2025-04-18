#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAXN = 1e6 + 5;
const int MOD = 1e9 + 7;

int n, m;
vector<vector<int>> v;

void input()
{
    cin >> n >> m;
    v.assign(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
            if (v[i][j] == 1 && i > 0)
                v[i][j] += v[i - 1][j];
        }
    }
}

vector<int> prepare1(int i, int m)
{
    vector<int> res(m);
    stack<int> st;
    for (int j = 0; j < m; j++)
    {
        while (!st.empty() && v[i][j] <= v[i][st.top()])
            st.pop();
        if (st.empty())
            res[j] = 0;
        else
            res[j] = st.top() + 1;
        st.push(j);
    }
    return res;
}

vector<int> prepare2(int i, int m)
{
    vector<int> res(m);
    stack<int> st;
    for (int j = m - 1; j >= 0; j--)
    {
        while (!st.empty() && v[i][j] <= v[i][st.top()])
            st.pop();
        if (st.empty())
            res[j] = m - 1;
        else
            res[j] = st.top() - 1;
        st.push(j);
    }
    return res;
}

int maxRect(int i, int m)
{
    vector<int> fSmallerIdx = prepare1(i, m);
    vector<int> bSmallerIdx = prepare2(i, m);
    int res = 0;
    for (int j = 0; j < m; j++)
        res = max(res, (bSmallerIdx[j] - fSmallerIdx[j] + 1) * v[i][j]);
    return res;
}

void solve()
{
    int res = 0;
    for (int i = 0; i < n; i++)
        res = max(res, maxRect(i, m));
    cout << res;
}

void testCase()
{
    input();
    solve();
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
