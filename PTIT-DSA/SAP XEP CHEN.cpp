#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define maxn 1e6 + 5

int main()
{
    faster();
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int b[n] = {};
    b[0] = a[0];
    cout << "Buoc 0: " << a[0] << endl;

    for (int i = 1; i < n; i++)
    {
        int idx = i;
        while (a[i] < b[idx - 1] && idx > 0)
        {
            b[idx] = b[idx - 1];
            --idx;
        }
        b[idx] = a[i];
        cout << "Buoc " << i << ": ";
        for (int j = 0; j <= i; j++)
            cout << b[j] << " ";
        cout << endl;
    }

    return 0;
}