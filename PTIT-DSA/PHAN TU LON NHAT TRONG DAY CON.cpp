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
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        vector<int> res;
        deque<int> dq;

        for (int i = 0; i < k; i++)
        {
            while (!dq.empty() && a[dq.back()] <= a[i])
            {
                dq.pop_back();
            }
            dq.push_back(i);
        }

        res.push_back(a[dq.front()]);

        for (int i = k; i < n; i++)
        {
            while (!dq.empty() && dq.front() < i - k + 1)
                dq.pop_front();
            while (!dq.empty() && a[i] >= a[dq.back()])
                dq.pop_back();
            dq.push_back(i);
            res.push_back(a[dq.front()]);
        }
        for (auto x : res)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}