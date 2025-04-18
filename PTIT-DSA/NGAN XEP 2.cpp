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
vector<string> v;

void input()
{
    int n;
    cin >> n;
    cin.ignore();
    v.clear();
    while (getline(cin, s))
    {
        v.push_back(s);
    }
}

void solve()
{
    vector<int> res;
    for (auto x : v)
    {
        if (x == "PRINT")
        {
            if (res.empty())
                cout << "NONE" << endl;
            else
            {
                cout << res.back() << endl;
            }
        }
        else if (x == "POP")
        {
            if (!res.empty())
                res.pop_back();
        }
        else
        {
            res.push_back(stoi(x.substr(5)));
        }
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
    // cin >> t;
    while (t--)
    {
        testCase();
        cout << endl;
    }
    return 0;
}
