#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAXN = 1e6 + 5;
const int MOD = 1e9 + 7;

int val(char c)
{
    if (c == '(')
        return 1;
    if (c == ')')
        return -1;
    if (c == '[')
        return 2;
    if (c == ']')
        return -2;
    if (c == '{')
        return 3;
    return -3;
}

string s;

void input()
{
    cin >> s;
}

void solve()
{
    stack<char> st;
    bool isValid = true;
    for (char c : s)
    {
        if (val(c) > 0)
            st.push(c);
        else if (st.empty() || val(c) + val(st.top()) != 0)
        {
            isValid = false;
            break;
        }
        else
            st.pop();
    }
    if (isValid)
        cout << "YES";
    else
        cout << "NO";
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
