#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAXN = 1e6 + 5;
const int MOD = 1e9 + 7;

double n, m;

void input()
{
    cin >> n >> m;
}

void solve()
{
    vector<pair<double, double>> v;
    for (int i = 0; i < n; i++)
    {
        double x, y;
        cin >> x >> y;
        v.push_back({x / y, y});
    }
    sort(v.begin(), v.end(), [](pair<double, double> a, pair<double, double> b)
         { return a.first > b.first; });
    // for(auto x : v) cout << x.first << " " << x.second << endl;
    double ans = 0, lastm = m;
    for (int i = 0; i < n; i++)
    {
        if (lastm == 0)
            break;
        if (v[i].second <= lastm)
        {
            ans += v[i].first * v[i].second;
            lastm -= v[i].second;
        }
        else
        {
            ans += v[i].first * lastm;
            lastm = 0;
        }
    }
    cout << fixed << setprecision(2) << ans;
}

void testCase()
{
    input();
    solve();
}

int main()
{
    faster();
    int t = 1;
    cin >> t;
    while (t--)
    {
        testCase();
        cout << endl;
    }
    return 0;
}
