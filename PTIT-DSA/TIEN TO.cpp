#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAXN = 1e6 + 5;
const int MOD = 1e9 + 7;

bool isO(string s)
{
    return s == "^" || s == "+" || s == "-" || s == "*" || s == "/";
}

ll toLL(string s)
{
    int n = s.size(), start = 0;
    if (s[0] == '-')
        start = 1;
    ll ans = 0;
    for (int i = start; i < n; i++)
        ans = ans * 10 + s[i] - '0';
    if (start == 1)
        ans *= -1;
    return ans;
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

int n;
string s;
vector<string> v;

void input()
{
    cin >> n;
    cin.ignore();
    getline(cin, s);
    v.clear();
    string word;
    stringstream ss(s);
    while (ss >> word)
        v.push_back(word);
}

void solve()
{
    stack<ll> st;
    for (int i = n - 1; i >= 0; i--)
    {
        if (!isO(v[i]))
            st.push(toLL(v[i]));
        else
        {
            ll a = st.top();
            st.pop();
            ll b = st.top();
            st.pop();
            st.push(compute(a, b, v[i]));
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
