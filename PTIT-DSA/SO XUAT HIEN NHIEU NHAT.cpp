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
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int max_appear = 0;
        int max_num = a[0];
        unordered_map<int, int> box;
        for (int i = 0; i < n; i++)
        {
            ++box[a[i]];
            if (max_appear < box[a[i]])
            {
                max_appear = box[a[i]];
                max_num = a[i];
            }
        }
        if (max_appear > n / 2)
            cout << max_num << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
