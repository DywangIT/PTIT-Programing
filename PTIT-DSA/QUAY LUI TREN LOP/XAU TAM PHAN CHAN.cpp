#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e6 + 5;

int n, k;
vector<int> a;
vector<int> v;
vector<vector<int>> res;
string s;

void print(vector<int> &v)
{
    for (auto x : v)
        cout << x;
    cout << endl;
}

void layboso(int st)
{
    if (v.size() == n)
    {
        res.push_back(v);
        return;
    }
    for (int i = 0; i <= 2; i++)
    {
        v.push_back(i);
        layboso(i);
        v.pop_back();
    }
}

void testCase()
{
    cin >> n;
    layboso(0);
    for (int i = 0; i < res.size(); i++)
    {
        if (i & 1)
        {
            cout << i + 1 << ": ";
            print(res[i]);
        }
    }
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
