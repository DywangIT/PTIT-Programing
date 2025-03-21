#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e6 + 5;

int n;
vector<int> a;

void testCase()
{
    cin >> n;
    a.resize(n);
    for (auto &x : a)
        cin >> x;

    cout << lower_bound(a.begin(), a.end(), 1) - a.begin();
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
