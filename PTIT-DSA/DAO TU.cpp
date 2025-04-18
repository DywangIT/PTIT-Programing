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
    getline(cin, s);
}

void solve()
{
    stack<string> st;
    stringstream ss(s);
    string word;
    while (ss >> word)
        st.push(word);
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
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
    cin.ignore();
    while (t--)
    {
        testCase();
        cout << endl;
    }
    return 0;
}
