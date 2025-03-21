#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define maxn 1e6 + 5

void merge(int a[], int l, int m, int r)
{
    vector<int> v;
    int i = l, j = m + 1;
    while (i <= m && j <= r)
    {
        if (a[i] <= a[j])
        {
            v.push_back(a[i]);
            ++i;
        }
        else
        {
            v.push_back(a[j]);
            ++j;
        }
    }
    while (i <= m)
        v.push_back(a[i++]);
    while (j <= r)
        v.push_back(a[j++]);
    for (int k = 0; k < v.size(); k++)
        a[l + k] = v[k];
}

void merge_sort(int a[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;
        merge_sort(a, l, m);
        merge_sort(a, m + 1, r);
        merge(a, l, m, r);
    }
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int l = 0, r = n - 1;
        merge_sort(a, 0, n - 1);
        for (auto x : a)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}