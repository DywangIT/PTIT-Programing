#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAXN = 1e6 + 5;
const int MOD = 1e9 + 7;

bool isO(char c)
{
    return c == '+' || c == '-' || c == '*' || c == '/';
}

string s;

void input()
{
    cin >> s;
}

void solve()
{
    stack<string> st;
    for (char c : s)
    {
        if (!isO(c))
            st.push(string(1, c));
        else
        {
            string a = st.top();
            st.pop();
            string b = st.top();
            st.pop();
            st.push("(" + b + c + a + ")");
        }
    }
    cout << st.top();
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
