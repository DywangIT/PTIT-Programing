#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e6 + 5;

void print(int a[], vector<int> b, int k)
{
    for (int i = 0; i < k; i++)
        cout << b[a[i] - 1] << " ";
    cout << endl;
    ;
}

void testCase()
{
    int n, k;
    cin >> n >> k;
    set<int> se;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        se.insert(x);
    }
    n = se.size();
    vector<int> b;
    for (auto x : se)
        b.push_back(x);
    // for(auto x : b) cout << x << " "; cout << endl;
    int a[k];
    iota(a, a + k, 1);
    print(a, b, k);
    while (true)
    {
        int ok = 0;
        for (int i = k - 1; i >= 0; i--)
        {
            if (i == k - 1 && a[i] < n)
            {
                ++a[i];
                print(a, b, k);
                ok = 1;
                break;
            }
            else if (i < k - 1 && a[i] < a[i + 1] - 1)
            {
                ++a[i];
                for (int j = i + 1; j < k; j++)
                    a[j] = a[j - 1] + 1;
                print(a, b, k);
                ok = 1;
                break;
            }
        }
        if (!ok)
            break;
    }

    cout << endl;
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
