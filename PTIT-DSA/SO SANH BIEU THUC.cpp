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

void doidau(string &tmp)
{
    for (char &c : tmp)
    {
        if (c == '+')
            c = '-';
        else if (c == '-')
            c = '+';
    }
}

string removed(string &a)
{
    stack<string> st;
    for (char c : a)
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
    return res;
}

void solve()
{
    cout << (removed(a) == removed(b) ? "YES" : "NO");
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
