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
    getline(cin, s);
}

void solve()
{
    stack<char> st;
    for (char c : s)
    {
        if (c == ')')
        {
            if (st.empty())
            {
                cout << "Yes";
                return;
            }
            bool hasOperator = false;
            while (!st.empty() && st.top() != '(')
            {
                if (st.top() == '+' || st.top() == '-' || st.top() == '*' || st.top() == '/')
                    hasOperator = true;
                st.pop();
            }
            if (!hasOperator || st.empty())
            {
                cout << "Yes";
                return;
            }
            st.pop();
        }
        else
            st.push(c);
    }
    cout << "No";
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
    cin.ignore();
    while (t--)
    {
        testCase();
        cout << endl;
    }
    return 0;
}
