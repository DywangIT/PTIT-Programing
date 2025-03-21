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
    vector<string> res;

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
        string tmp = "Buoc " + to_string(i + 1) + ": ";
        for (auto x : a)
            tmp += to_string(x) + " ";
        res.push_back(tmp);
    }
    reverse(res.begin(), res.end());
    for (auto x : res)
        cout << x << endl;

    return 0;
}