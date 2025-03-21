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
    int b[n] = {};
    b[0] = a[0];

    for (int i = 1; i < n; i++)
    {
        int idx = i;
        while (a[i] < b[idx - 1] && idx > 0)
        {
            b[idx] = b[idx - 1];
            --idx;
        }
        b[idx] = a[i];
        string tmp = "Buoc " + to_string(i) + ": ";
        for (int j = 0; j <= i; j++)
            tmp += to_string(b[j]) + " ";
        res.push_back(tmp);
    }
    reverse(res.begin(), res.end());
    res.push_back("Buoc 0: " + to_string(a[0]) + " ");
    for (auto x : res)
        cout << x << endl;
    return 0;
}