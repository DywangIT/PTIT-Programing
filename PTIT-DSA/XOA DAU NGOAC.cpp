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
    vector<pair<int, int>> v; // cặp dấu ngoặc tương ứng
    stack<int> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
            st.push(i);
        else if (s[i] == ')')
        {
            v.push_back({st.top(), i});
            st.pop();
        }
    }

    set<string> res;

    int n = v.size(), total = 1 << n;
    for (int i = total - 2; i >= 0; i--)
    {
        string np = bitset<11>(i).to_string().substr(11 - n);
        string sc = s;
        for (int j = 0; j < n; j++)
        {
            if (np[j] == '0')
            {
                sc[v[j].first] = sc[v[j].second] = '#';
            }
        }
        string scc = "";
        for (char c : sc)
        {
            if (c != '#')
                scc += c;
        }
        res.insert(scc);
    }
    for (string x : res)
        cout << x << endl;
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
    // cin >> t;
    while (t--)
    {
        testCase();
        cout << endl;
    }
    return 0;
}
