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
    int C[k];
    set<int> se;
    for (int i = 0; i < k; i++)
    {
        cin >> C[i];
        se.insert(C[i]);
    }
    int tmp = se.size();
    int ok = 0;
    for (int i = k - 1; i >= 0; i--)
    {
        if (i == k - 1 && C[i] < n)
        {
            ++C[i];
            se.insert(C[i]);
            break;
        }
        else if (i < k - 1 && C[i] < C[i + 1] - 1)
        {
            ++C[i];
            se.insert(C[i]);
            for (int j = i + 1; j < k; j++)
            {
                C[j] = C[j - 1] + 1;
                se.insert(C[j]);
            }
            break;
        }
        else if (i == 0)
            ok = 1;
    }
    if (ok)
        cout << k << endl;
    else
        cout << se.size() - tmp << endl;
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
