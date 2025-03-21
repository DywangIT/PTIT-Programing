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
vector<int> v;
vector<string> res;
vector<vector<int>> grid(1005, vector<int>(1005));
string s;

string change(vector<int> &v)
{
    string tmp = to_string(v[0]);
    for (int i = 1; i < v.size(); i++)
        tmp += " " + to_string(v[i]);
    return tmp;
}

void layso(int st)
{
    for (int i = st; i < n; i++)
    {
        if (v.empty() || a[i] > v.back())
        {
            v.push_back(a[i]);
            if (v.size() > 1)
                res.push_back(change(v));
            layso(i + 1);
            v.pop_back();
        }
    }
}

void testCase()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }

    layso(0);
    sort(res.begin(), res.end());
    for (auto x : res)
        cout << x << endl;
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
