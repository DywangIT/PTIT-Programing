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
    return c == '^' || c == '+' || c == '-' || c == '*' || c == '/';
}

string s;

void input()
{
    cin >> s;
}

void solve()
{
    stack<string> st;
    int n = s.size();
    for (int i = n - 1; i >= 0; i--)
    {
        if (isO(s[i]))
        {
            string a = st.top();
            st.pop();
            string b = st.top();
            st.pop();
            st.push("(" + a + s[i] + b + ")");
        }
        else
            st.push(string(1, s[i]));
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
