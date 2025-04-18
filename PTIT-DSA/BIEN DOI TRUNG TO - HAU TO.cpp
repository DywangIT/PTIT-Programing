#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAXN = 1e6 + 5;
const int MOD = 1e9 + 7;

int value(char c)
{
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    return 1;
}

bool isOperator(char c)
{
    return c == '^' || c == '+' || c == '-' || c == '*' || c == '/';
}

string s;

void input()
{
    cin >> s;
}

void solve()
{
    stack<char> st;
    vector<char> out;

    for (char c : s)
    {
        if (c == '(')
            st.push(c);
        else if (c == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                out.push_back(st.top());
                st.pop();
            }
            if (!st.empty())
                st.pop();
        }
        else if (isOperator(c))
        {
            if (st.empty() || !isOperator(st.top()))
                st.push(c);
            else
            {
                while (!st.empty() && isOperator(st.top()) && value(st.top()) >= value(c))
                {
                    out.push_back(st.top());
                    st.pop();
                }
                st.push(c);
            }
        }
        else
            out.push_back(c);
    }
    while (!st.empty())
    {
        out.push_back(st.top());
        st.pop();
    }
    for (char c : out)
        cout << c;
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
