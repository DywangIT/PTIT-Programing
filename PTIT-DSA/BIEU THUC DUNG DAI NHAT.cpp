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

    int n = s.size();
    stack<char> st;

    for (int i = 0; i < n; i++)
    {
        if (!st.empty() && s[i] == ')' && st.top() == '(')
            st.pop();
        else
            st.push(s[i]);
    }
    cout << n - st.size();
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
