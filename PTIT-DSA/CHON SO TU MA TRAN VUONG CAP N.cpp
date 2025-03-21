#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e6 + 5;

int n, k, a[1000][1000];

void testCase()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    }

    int cnt = 0;
    vector<vector<int>> res;

    int b[n + 1];
    iota(b, b + n + 1, 0);
    do
    {
        int sum = 0;
        for (int i = 1; i <= n; i++)
            sum += a[i][b[i]];
        if (sum == k)
        {
            ++cnt;
            vector<int> tmp;
            for (int i = 1; i <= n; i++)
                tmp.push_back(b[i]);
            res.push_back(tmp);
        }
    } while (next_permutation(b + 1, b + n + 1));
    cout << cnt << endl;
    for (int i = 0; i < res.size(); i++)
    {
        for (auto x : res[i])
            cout << x << " ";
        cout << endl;
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
