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
    s += s.back();
}

void solve()
{
    int n = s.size();
    vector<int> v(n);
    stack<char> st;
    int cur = 1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'D')    
            st.push(i);
        else
        {
            v[i] = cur++;
            while (!st.empty())
            {
                v[st.top()] = cur++;
                st.pop();
            }
        }
    }
    while (!st.empty())
    {
        v[st.top()] = cur++;
        st.pop();
    }
    for (int x : v)
        cout << x;
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
