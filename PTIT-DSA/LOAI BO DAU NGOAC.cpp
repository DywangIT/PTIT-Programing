#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e6 + 5;

int k;
map<string, bool> res;
string s;

bool isValid(string s)
{
    if (s.size() < 2)
        return false;
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
            st.push(s[i]);
        else if (s[i] == ')')
        {
            if (st.empty())
                return false;
            st.pop();
        }
    }
    return st.empty();
}

void bobotdau(string s, int st)
{
    if (s.size() < k)
        return;
    if (isValid(s))
    {
        if (s.size() > k)
        {
            res.clear();
            k = s.size();
        }
        res[s] = true;
        return;
    }
    for (int i = st; i < s.size(); i++)
    {
        if (s[i] == ')' || s[i] == '(')
        {
            string tmp = s;
            tmp.erase(i, 1);
            bobotdau(tmp, i);
        }
    }
}

void testCase()
{
    cin >> s;
    res.clear();
    k = 0;
    bobotdau(s, 0);
    if (res.empty())
    {
        cout << -1;
        return;
    }
    for (auto &x : res)
        cout << x.first << " ";
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        testCase();
        cout << endl;
    }
    return 0;
}
