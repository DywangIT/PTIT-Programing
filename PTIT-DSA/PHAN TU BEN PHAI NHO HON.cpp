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

bool cmp(int a, int b, bool bigger)
{
    if (bigger)
        return a >= b;
    return a <= b;
}

vector<int> prepare(bool bigger)
{
    stack<int> st;
    vector<int> res(n);
    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && cmp(v[i], v[st.top()], bigger))
        {
            st.pop();
        }
        if (st.empty())
            res[i] = -1;
        else
            res[i] = st.top();
        st.push(i);
    }
    return res;
}

void solve()
{
    vector<int> fBiggerIdx = prepare(true);
    vector<int> fSmallerIdx = prepare(false);

    vector<int> res(n);
    for (int i = 0; i < n; i++)
    {
        if (fBiggerIdx[i] == -1 || fSmallerIdx[fBiggerIdx[i]] == -1)
            res[i] = -1;
        else
            res[i] = v[fSmallerIdx[fBiggerIdx[i]]];
    }
    for (int x : res)
        cout << x << " ";
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
