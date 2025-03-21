#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e6 + 5;

int n, m, k;
vector<int> a;
vector<int> v;
vector<vector<int>> res;

void print(vector<int> &v)
{
    for (auto &x : v)
        cout << x << " ";
    cout << endl;
}

void layso(int st)
{
    if (v.size() == k)
    {
        print(v);
        return;
    }
    if (st == n)
        return;
    for (int i = st; i < n; i++)
    {
        v.push_back(a[i]);
        layso(i + 1);
        v.pop_back();
    }
}

void testCase()
{
    cin >> n >> k;
    a.clear();
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());

    layso(0);
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        testCase();
        cout << endl;
    }
    return 0;
}
