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

void doidau(string &tmp)
{
    for (char &x : tmp)
    {
        if (x == '+')
            x = '-';
        else if (x == '-')
            x = '+';
    }
}

void input()
{
    cin >> s;
}

void solve()
{
    stack<string> st;
    for (char c : s)
    {
        if (c == ')')
        {
            string tmp = "";
            while (st.top() != "(")
            {
                tmp = st.top() + tmp;
                st.pop();
            }
            st.pop();
            if (!st.empty() && st.top() == "-")
                doidau(tmp);
            st.push(tmp);
        }
        else
            st.push(string(1, c));
    }
    string res = "";
    while (!st.empty())
    {
        res = st.top() + res;
        st.pop();
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
