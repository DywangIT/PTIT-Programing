#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAXN = 1e6 + 5;
const int MOD = 1e9 + 7;

int n;
vector<int> v;

void input()
{
    cin >> n;
    v.resize(n);
    for (int &x : v)
        cin >> x;
}

vector<int> prepare1()
{
    stack<int> st;
    vector<int> res(n);
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && v[i] <= v[st.top()])
        {
            st.pop();
        }
        if (st.empty())
            res[i] = 0;
        else
            res[i] = st.top() + 1;
        st.push(i);
    }
    return res;
}

vector<int> prepare2()
{
    stack<int> st;
    vector<int> res(n);
    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && v[i] <= v[st.top()])
        {
            st.pop();
        }
        if (st.empty())
            res[i] = n - 1;
        else
            res[i] = st.top() - 1;
        st.push(i);
    }
    return res;
}

void solve()
{
    vector<int> frontSmallerIdx = prepare1();
    vector<int> backSmallerIdx = prepare2();
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] <= backSmallerIdx[i] - frontSmallerIdx[i] + 1)
            res = max(res, v[i]);
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
