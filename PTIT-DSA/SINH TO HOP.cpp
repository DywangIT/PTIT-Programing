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
    int n, k;
    cin >> n >> k;
    int a[k];
    iota(a, a + k, 1);
    print(a, k);
    while (true)
    {
        int ok = 0;
        for (int i = k - 1; i >= 0; i--)
        {
            if (i == k - 1 && a[i] < n)
            {
                ++a[i];
                print(a, k);
                ok = 1;
                break;
            }
            else if (i < k - 1 && a[i] < a[i + 1] - 1)
            {
                ++a[i];
                for (int j = i + 1; j < k; j++)
                    a[j] = a[j - 1] + 1;
                print(a, k);
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
    int t;
    cin >> t;
    while (t--)
    {
        testCase();
    }
    return 0;
}
