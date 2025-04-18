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
    stack<char> st;
    int cnt = 0;
    for (char c : s)
    {
        if (c == '(')
        {
            st.push(c);
        }
        else
        {
            if (st.empty())
            {
                ++cnt;
                st.push('(');
            }
            else if (st.top() == '(')
            {
                st.pop();
            }
        }
    }
    if (!st.empty())
        cnt += st.size() / 2;
    cout << cnt;
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
