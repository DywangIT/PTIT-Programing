#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e6 + 5;

int n;
vector<int> a, b;

void testCase()
{
    cin >> n;
    a.resize(n);
    b.resize(n - 1);
    for (auto &x : a)
        cin >> x;
    for (auto &x : b)
        cin >> x;
    for (int i = 0; i < n; i++)
    {\
        if (a[i] != b[i])
        {
            cout << i + 1;
            return;
        }
    }
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
