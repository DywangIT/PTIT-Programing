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
    stack<string> st;

    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == '[')
        {
            string tmp = "";
            while (!st.empty() && st.top() != "]")
            {
                tmp += st.top();
                st.pop();
            }
            st.pop();
            st.push(tmp);
        }
        else if (s[i] >= '0' && s[i] <= '9')
        {
            string num = "";
            while (i >= 0 && isdigit(s[i]))
            {
                num = s[i] + num;
                --i;
            }
            ++i;
            string tmp = "";
            for (int j = 0; j < stoi(num); j++)
                tmp += st.top();
            st.pop();
            st.push(tmp);
        }
        else
        {
            st.push(string(1, s[i]));
        }
    }
    string res = "";
    while (!st.empty())
    {
        res += st.top();
        st.pop();
    }
    cout << res;
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
