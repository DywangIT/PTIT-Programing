#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e6 + 5;

void testCase()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(k);
    for (auto &x : v)
        cin >> x;

    vector<int> a(k);
    iota(a.begin(), a.end(), 1);
    vector<vector<int>> res;
    res.push_back(a);

    while (true)
    {
        int ok = 0;
        for (int i = k - 1; i >= 0; i--)
        {
            if (i == k - 1 && a[i] < n)
            {
                ++a[i];
                res.push_back(a);
                break;
            }
            else if (i < k - 1 && a[i] < a[i + 1] - 1)
            {
                ++a[i];
                for (int j = i + 1; j < k; j++)
                    a[j] = a[j - 1] + 1;
                res.push_back(a);
                break;
            }
            else if (i == 0)
                ok = 1;
        }
        if (ok)
            break;
    }
    for (int i = 0; i < res.size(); i++)
    {
        if (res[i] == v)
        {
            cout << i + 1;
            break;
        }
    }
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
