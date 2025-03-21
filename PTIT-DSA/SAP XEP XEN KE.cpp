#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void Merge(vector<int> &v, int l, int m, int r)
{
    int i = l, j = m + 1;
    vector<int> arrCopy;
    while (i <= m && j <= r)
    {
        if (v[i] <= v[j])
        {
            arrCopy.push_back(v[i]);
            i++;
        }
        else
        {
            arrCopy.push_back(v[j]);
            j++;
        }
    }

    while (i <= m)
        arrCopy.push_back(v[i++]);
    while (j <= r)
        arrCopy.push_back(v[j++]);

    for (int k = 0; k < arrCopy.size(); k++)
    {
        v[l + k] = arrCopy[k];
    }
}

void MergeSort(vector<int> &v, int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;
        MergeSort(v, l, m);
        MergeSort(v, m + 1, r);
        Merge(v, l, m, r);
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
        vector<int> v(n);
        for (auto &x : v)
            cin >> x;
        MergeSort(v, 0, n - 1);
        int cnt = 1;
        vector<int> res;
        for (int i = 0; i < n; i++)
        {
            if (cnt > n)
                break;
            res.push_back(v[n - i - 1]);
            ++cnt;
            if (cnt <= n)
            {
                res.push_back(v[i]);
                ++cnt;
            }
        }

        for (auto x : res)
            cout << x << " ";
        cout << "\n";
    }
    return 0;
}