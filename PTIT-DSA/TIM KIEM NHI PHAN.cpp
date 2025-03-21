#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e6 + 5;

int n, k;
vector<int> a;

void testCase()
{
    cin >> n >> k;
    a.resize(n);
    for (auto &x : a)
        cin >> x;

    if (find(a.begin(), a.end(), k) != a.end())
    {
        cout << lower_bound(a.begin(), a.end(), k) - a.begin() + 1;
    }
    else
        cout << "NO";
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        testCase();
        cout << endl;
    }
    return 0;
}
