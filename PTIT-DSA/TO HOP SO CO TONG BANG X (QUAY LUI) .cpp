#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e6 + 5;

int n, k, ok;
vector<int> a;
vector<int> v;
vector<string> res;
vector<vector<int>> grid(1005, vector<int>(1005));
string s;

void print()
{
    // cout << "{" << v[0];
    // for (int i = 1; i < v.size(); i++)
    //     cout << " " << v[i];
    // cout << "} ";
    s = "{" + to_string(v[0]);
    for (int i = 1; i < v.size(); i++)
        s += " " + to_string(v[i]);
    s += "}";
    res.push_back(s);
}

void layso(int st, int sum)
{
    if (sum == k)
    {
        ok = 1;
        print();
        return;
    }
    if (sum > k)
        return;
    for (int i = st; i < n; i++)
    {
        v.push_back(a[i]);
        sum += a[i];
        layso(i, sum);
        v.pop_back();
        sum -= a[i];
    }
}

void testCase()
{
    cin >> n >> k;
    a.clear();
    v.clear();
    res.clear();
    ok = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    layso(0, 0);
    if (!res.empty())
        cout << res.size() << " ";
    for (auto &x : res)
        cout << x << " ";
    if (!ok)
        cout << -1;
    cout << endl;
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
