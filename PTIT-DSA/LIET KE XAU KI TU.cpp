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

void layxau(int st)
{
    if (v.size() == n)
    {
        for (auto x : v)
            cout << char(x);
        cout << endl;
    }
    else
    {
        for (int i = st; i < a.size(); i++)
        {
            v.push_back(a[i]);
            layxau(i);
            v.pop_back();
        }
    }
}

void testCase()
{
    char c;
    cin >> c;
    cin >> n;

    for (int i = 'A'; i <= c; i++)
        a.push_back(i);
    layxau(0);
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
