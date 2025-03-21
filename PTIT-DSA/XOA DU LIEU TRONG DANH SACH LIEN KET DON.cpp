#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void testCase()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int x;
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != x)
            cout << a[i] << " ";
    }
}

int main()
{
    faster();
    testCase();
    return 0;
}
