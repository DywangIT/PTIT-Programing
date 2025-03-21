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
string v;
vector<string> res;
string s;

void laykitu(int i)
{
    if (!v.empty())
        res.push_back(v);
    if (i == n)
        return;
    for (int j = i; j < n; j++)
    {
        v += s[j];
        laykitu(j + 1);
        v.pop_back();
    }
}

void testCase()
{
    cin >> n >> s;
    v.clear();
    res.clear();

    laykitu(0);
    sort(res.begin(), res.end());
    for (auto &x : res)
        cout << x << " ";
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
