#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAXN = 1e6 + 5;
const int MOD = 1e9 + 7;

bool isO(string c)
{
    return c == "^" || c == "+" || c == "-" || c == "*" || c == "/";
}

ll compute(ll a, ll b, string c)
{
    if (c == "+")
        return a + b;
    if (c == "-")
        return a - b;
    if (c == "*")
        return a * b;
    return a / b;
}

ll toInt(string s)
{
    int ans = 0, start = 0;
    if (s[0] == '-')
    {
        start = 1;
    }
    for (int i = start; i < s.size(); i++)
        ans = ans * 10 + s[i] - '0';
    if (start == 1)
        ans *= -1;
    return ans;
}

int n;
string s;
vector<string> v;

void input()
{
    cin >> n;
    v.clear();
    cin.ignore();
    getline(cin, s);
    string word;
    stringstream ss(s);
    while (ss >> word)
        v.push_back(word);
}

void solve()
{
    stack<ll> st;
    for (string s : v)
    {
        if (!isO(s))
        {
            st.push(toInt(s));
        }
        else
        {
            ll a = st.top();
            st.pop();
            ll b = st.top();
            st.pop();
            st.push(compute(b, a, s));
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
