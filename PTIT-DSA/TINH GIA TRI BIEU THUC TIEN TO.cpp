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

int compute(int a, int b, char c)
{
    if (c == '+')
        return a + b;
    if (c == '-')
        return a - b;
    if (c == '*')
        return a * b;
    return a / b;
}

void solve()
{
    stack<int> st;
    int n = s.size();
    for (int i = n - 1; i >= 0; i--)
    {
        char c = s[i];
        if (!isO(c))
            st.push(c - '0');
        else
        {
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            int ans = compute(a, b, c);
            st.push(ans);
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
