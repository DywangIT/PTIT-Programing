#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e6 + 5;

int n, k, a[1000][1000];

void print(vector<int> v)
{
    for (auto x : v)
        cout << x << " ";
    cout << endl;
}

void testCase()
{
    cin >> n >> k;
    vector<int> v(k);
    for (auto &x : v)
        cin >> x;

    int i = k - 1;
    while (v[i] - 1 == v[i - 1] && i - 1 >= 0)
        --i;
    if (i == 0)
    {
        if (v[i] - 1 > 0)
        {
            --v[i];
            for (int j = i + 1; j < k; j++)
                v[j] = n - k + j + 1;
        }
        else
        {
            for (int j = 0; j < k; j++)
                v[j] = n - k + j + 1;
        }
        print(v);
    }
    else if (i == k - 1)
    {
        --v[i];
        print(v);
    }
    else
    {
        --v[i];
        for (int j = i + 1; j < k; j++)
            v[j] = n - k + j + 1;
        print(v);
    }
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
