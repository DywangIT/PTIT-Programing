#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAXN = 1e6 + 5;
const int MOD = 1e9 + 7;

string s;

void input()
{
    cin >> s;
}

void solve()
{
    int n = s.size();
    vector<int> idx(n, 0);
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            st.push(i);
        }
        else if (!st.empty())
        {
            idx[i] = idx[st.top()] = 1;
            st.pop();
        }
    }
    int cnt = 0, res = 0;
    for (int x : idx)
    {
        if (x == 0)
        {
            cnt = 0;
        }
        else
        {
            ++cnt;
            res = max(res, cnt);
        }
    }
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
