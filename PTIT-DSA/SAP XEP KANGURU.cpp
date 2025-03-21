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
    sort(a.begin(), a.end(), greater<int>());

    int i = 0, j = n / 2, cnt = 0;
    while (i < n / 2 && j < n)
    {
        if (a[i] >= 2 * a[j])
        {
            ++cnt;
            ++i;
            ++j;
        }
        else
        {
            j++;
        }
    }
    cout << n - cnt;
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
