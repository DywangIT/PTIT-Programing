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
    stack<string> res;
    int n = s.size();
    for (int i = n - 1; i >= 0; i--)
    {
        if (!isO(s[i]))
            res.push(string(1, s[i]));
        else
        {
            string a = res.top();
            res.pop();
            string b = res.top();
            res.pop();
            res.push(a + b + s[i]);
        }
    }
    cout << res.top();
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
