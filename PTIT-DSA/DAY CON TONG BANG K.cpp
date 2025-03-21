#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e6 + 5;

int n, k, ok, sum;
vector<int> a;
vector<int> v;
vector<vector<int>> res;
vector<vector<int>> grid(1005, vector<int>(1005));
string s;

void print()
{
    cout << "[" << v[0];
    for (int i = 1; i < v.size(); i++)
        cout << " " << v[i];
    cout << "] ";
}

void layso(int i, int sum)
{
    if (sum > k)
        return;
    if (sum == k)
    {
        ok = 1;
        print();
        return;
    }
    for (int j = i; j < n; j++)
    {
        v.push_back(a[j]);
        layso(j + 1, sum + a[j]);
        v.pop_back();
    }
}

void testCase()
{
    cin >> n >> k;
    a.clear();
    v.clear();
    ok = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }

    sort(a.begin(), a.end());

    layso(0, 0);
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
