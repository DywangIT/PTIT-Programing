#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        int n1, n2, n3, ok = 0;
        cin >> n1 >> n2 >> n3;
        ll a1[n1], a2[n2], a3[n3];

        for (int i = 0; i < n1; i++)
            cin >> a1[i];
        for (int i = 0; i < n2; i++)
            cin >> a2[i];
        for (int i = 0; i < n3; i++)
            cin >> a3[i];

        int i = 0, j = 0, k = 0;
        while (i < n1 && j < n2 && k < n3)
        {
            if (a1[i] == a2[j] && a1[i] == a3[k])
            {
                ok = 1;
                cout << a1[i] << " ";
                ++i;
                ++j;
                ++k;
            }
            else if (a1[i] < a2[j] || a1[i] < a3[k])
                ++i;
            else if (a2[j] < a3[k])
                ++j;
            else
                ++k;
        }
        if (!ok)
            cout << -1;
        cout << endl;
    }

    return 0;
}
