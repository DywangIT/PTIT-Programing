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

    for (int i = 0; i < n - 1; i++)
    {
        int minidx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[minidx])
            {
                minidx = j;
            }
        }
        swap(a[i], a[minidx]);
        cout << "Buoc " << i + 1 << ": ";
        for (auto x : a)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}