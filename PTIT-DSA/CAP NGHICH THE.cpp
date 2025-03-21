#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e6 + 5;

int n;
vector<ll> a;
ll curAns;

ll mergeAndCount(vector<ll> &a, int l, int m, int r)
{
    vector<ll> res;
    int i = l, j = m + 1;
    ll cnt = 0;
    while (i <= m && j <= r)
    {
        if (a[i] <= a[j])
            res.push_back(a[i++]);
        else
        {
            cnt += m - i + 1;
            res.push_back(a[j++]);
        }
    }
    while (i <= m)
        res.push_back(a[i++]);
    while (j <= r)
        res.push_back(a[j++]);

    for (int i = 0; i < res.size(); i++)
        a[i + l] = res[i];
    return cnt;
}

void mergeSortAndCount(vector<ll> &a, int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;
        mergeSortAndCount(a, l, m);
        mergeSortAndCount(a, m + 1, r);
        curAns += mergeAndCount(a, l, m, r);
    }
}

void testCase()
{
    cin >> n;
    a.resize(n);
    for (auto &x : a)
        cin >> x;
    curAns = 0;

    mergeSortAndCount(a, 0, n - 1);
    cout << curAns;
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
