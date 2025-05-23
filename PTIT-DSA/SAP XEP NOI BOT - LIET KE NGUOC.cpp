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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        vector<string> res;

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
                string tmp = "Buoc " + to_string(i + 1) + ": ";
                for (auto x : a)
                    tmp += to_string(x) + " ";
                res.push_back(tmp);
            }
        }
        reverse(res.begin(), res.end());
        for (auto x : res)
            cout << x << endl;
    }

    return 0;
}