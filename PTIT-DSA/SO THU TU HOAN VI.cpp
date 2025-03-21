#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e6 + 5;

void print(int a[], int k)
{
    for (int i = 0; i < k; i++)
        cout << a[i];
    cout << " ";
}

void testCase()
{
    int n;
    cin >> n;
    vector<int> b(n);
    for (int i = 0; i < n; i++)
        cin >> b[i];
    vector<vector<int>> res;
    vector<int> a(n);
    iota(a.begin(), a.end(), 1);
    res.push_back(a);
    while (true)
    {
        int i = n - 2;
        while (i >= 0 && a[i] > a[i + 1])
            --i;
        if (i == -1)
            break;
        int min_idx = i + 1;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] > a[i] && a[j] < a[min_idx])
                min_idx = j;
        }
        swap(a[i], a[min_idx]);
        sort(a.begin() + i + 1, a.end());
        res.push_back(a);
    }
    for (int i = 0; i < res.size(); i++)
    {
        if (res[i] == b)
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
