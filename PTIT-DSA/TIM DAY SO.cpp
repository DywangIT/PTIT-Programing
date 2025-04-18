#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAXN = 1e6 + 5;
const int MOD = 1e9 + 7;

int n;
vector<int> v;

void input()
{
    cin >> n;
    v.assign(n, 0);
    for (int &x : v)
        cin >> x;
    int limit = *min_element(v.begin(), v.end());
    for (int i = 1; i <= limit; i++)
    {
        int target = limit / i, sum = 0, ok = 1;
        for (int j = 0; j < n; j++)
        {
            int ans = v[j] / target;
            if (v[j] / ans != target)
            {
                ok = 0;
                break;
            }
            while (v[j] / ans == target)
                --ans;
            sum += ans + 1;
        }
        if (ok)
        {
            cout << sum;
            return;
        }
    }
}

void testCase()
{
    input();
}

int main()
{
    faster();
    int t = 1;
    // cin >> t;
    while (t--)
    {
        testCase();
        cout << endl;
    }
    return 0;
}
