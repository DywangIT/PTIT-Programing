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
        int n;
        cin >> n;
        int a[n];
        for (auto &x : a)
            cin >> x;

        string dau = "";
        int cur_sum = 1e7;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (abs(a[i] + a[j]) < cur_sum)
                {
                    cur_sum = abs(a[i] + a[j]);
                    if (a[i] + a[j] >= 0)
                        dau = "duong";
                    else
                        dau = "am";
                }
            }
        }
        if (dau == "am")
            cout << '-';
        cout << cur_sum << endl;
    }
    return 0;
}