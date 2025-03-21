#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

int x;

bool cmp(int a, int b)
{
    int aa = a - x > 0 ? a - x : x - a;
    int bb = b - x > 0 ? b - x : x - b;
    return aa < bb;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n >> x;
        vector<int> v(n);
        for (auto &x : v)
            cin >> x;
        stable_sort(v.begin(), v.end(), cmp);
        for (auto x : v)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}