#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e6 + 5;

void print(int a[], int k)
{
    for (int i = 0; i < k; i++)
        cout << a[i] << " ";
    cout << endl;
}

void testCase()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int ok = 0;
    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i] < a[i + 1])
        {
            int min_idx = i + 1;
            for (int j = i + 1; j < n; j++)
            {
                if (a[j] > a[i] && a[j] < a[min_idx])
                    min_idx = j;
            }
            swap(a[i], a[min_idx]);
            sort(a + i + 1, a + n);
            print(a, n);
            ok = 1;
            break;
        }
        if (i == 0)
        {
            reverse(a, a + n);
            print(a, n);
        }
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
