#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e6 + 5;

int n, m, k, ok;
vector<int> a;
vector<bool> vis;
vector<int> v;
vector<string> res;
vector<vector<int>> grid(1005, vector<int>(1005));
string s;

bool check(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        if ((v[i] == 65 || v[i] == 69) && v[i - 1] != 65 && v[i - 1] != 69 && v[i + 1] != 65 && v[i + 1] != 69 && i - 1 >= 0 && i + 1 < v.size())
            return false;
    }
    return true;
}

void layxau()
{
    if (v.size() == a.size())
    {
        if (check(v))
        {
            for (auto x : v)
                cout << char(x);
            cout << endl;
        }
    }
    else
    {
        for (int i = 0; i < a.size(); i++)
        {
            if (!vis[a[i]])
            {
                vis[a[i]] = true;
                v.push_back(a[i]);
                layxau();
                vis[a[i]] = false;
                v.pop_back();
            }
        }
    }
}

void testCase()
{
    char c;
    cin >> c;
    a.clear();
    for (int i = 'A'; i <= c; i++)
    {
        a.push_back(i);
    }
    vis.resize(MAX_N, false);
    layxau();
}

int main()
{
    faster();
    // int t;
    // cin >> t;
    // while (t--)
    // {
    testCase();
    // }
    return 0;
}
