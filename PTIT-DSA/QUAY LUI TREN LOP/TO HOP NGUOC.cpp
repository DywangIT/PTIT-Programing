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

void print(vector<int> v)
{
    for (auto x : v)
        cout << x << " ";
    cout << endl;
}

void laytohop(int i)
{
    if (v.size() == k)
    {
        res.push_back(v);
        return;
    }
    for (int j = i; j <= n; j++)
    {
        v.push_back(j);
        laytohop(j + 1);
        v.pop_back();
    }
}

void testCase()
{
    cin >> n >> k;
    a.clear();
    for (int i = 1; i <= n; i++)
        a.push_back(i);
    // for(auto x : a) cout << x << " "; cout << endl;
    laytohop(1);
    reverse(res.begin(), res.end());
    for (auto x : res)
        print(x);
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        testCase();
    }
    return 0;
}
