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

        int max_doan[n], min_doan[n];
        max_doan[0] = a[0];
        for (int i = 1; i < n; i++)
            max_doan[i] = max_doan[i - 1] > a[i] ? max_doan[i - 1] : a[i];
        min_doan[n - 1] = a[n - 1];
        for (int i = n - 2; i >= 0; i--)
            min_doan[i] = min_doan[i + 1] < a[i] ? min_doan[i + 1] : a[i];

        vector<int> res;
        for (int i = 0; i < n - 1; i++)
        {
            if (max_doan[i] <= min_doan[i + 1])
                res.push_back(i + 1);
        }
        cout << res.size() << endl;
        for (auto x : res)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}
