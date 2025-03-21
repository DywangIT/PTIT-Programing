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

    for (int i = 0; i < n; i++)
    {
        int ok = 0;
        for (int j = 0; j < n - 1; j++)
        {
            if (a[j + 1] < a[j])
            {
                swap(a[j + 1], a[j]);
                ok = 1;
            }
        }
        if (ok)
        {
            cout << "Buoc " << i + 1 << ": ";
            for (auto x : a)
                cout << x << " ";
            cout << endl;
        }
    }

    return 0;
}