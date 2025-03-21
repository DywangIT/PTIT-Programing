#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void check(int a[], int n, int k)
{
    sort(a, a + n);

    for (int i = 0; i < n - 2; i++)
    {
        int left = i + 1, right = n - 1;

        while (left < right)
        {
            int sum = a[i] + a[left] + a[right];
            if (sum == k)
            {
                cout << "YES\n";
                return;
            }
            if (sum < k)
                left++;
            else
                right--;
        }
    }

    cout << "NO\n";
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        check(a, n, k);
    }

    return 0;
}
