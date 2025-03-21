#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e6 + 5;

int n, m, k;
vector<vector<int>> a;
vector<vector<int>> v;
vector<vector<int>> res;

int solve(vector<int> &idx)
{
    vector<int> new_a;
    for (int i = 0; i < n; i++)
    {
        int num = 0;
        for (auto &x : idx)
        {
            num = num * 10 + a[i][x];
        }
        new_a.push_back(num);
    }
    int ans = INT_MAX;
    ans = min(ans, *max_element(new_a.begin(), new_a.end()) - *min_element(new_a.begin(), new_a.end()));
    return ans;
}

void testCase()
{
    cin >> n >> k;
    a.clear();
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        vector<int> tmp;
        for (auto &y : x)
            tmp.push_back(y - '0');
        a.push_back(tmp);
    }

    vector<int> idx(k);
    iota(idx.begin(), idx.end(), 0);
    int ans = INT_MAX;

    do
    {
        ans = min(ans, solve(idx));
    } while (next_permutation(idx.begin(), idx.end()));

    cout << ans;
}

int main()
{
    faster();
    // int t;
    // cin >> t;
    // while (t--)
    // {
    testCase();
    cout << endl;
    // }
    return 0;
}
