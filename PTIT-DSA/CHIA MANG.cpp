#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e6 + 5;

int n, m, k, sum;
vector<int> a;
vector<int> vis;
vector<vector<int>> res;

bool chiamang(int idx, int cursum, int count)
{
    if (count == k)
        return true;
    if (cursum == sum)
        return chiamang(0, 0, count + 1);

    for (int i = idx; i < n; i++)
    {
        if (!vis[i] && cursum + a[i] <= sum)
        {
            vis[i] = 1;
            if (chiamang(i + 1, cursum + a[i], count))
                return true;
            vis[i] = 0;
        }
    }
    return false;
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

    sum = accumulate(a.begin(), a.end(), 0);
    if (sum % k != 0)
    {
        cout << 0;
        return;
    }
    sum /= k;
    sort(a.rbegin(), a.rend());
    vis.assign(20, 0);
    cout << (chiamang(0, 0, 0) ? 1 : 0);
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
