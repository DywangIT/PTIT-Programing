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

    unordered_map<int, int> ump;
    for (int i = 0; i < n; i++)
    {
        if (!ump[a[i]])
        {
            cout << a[i] << " ";
            ump[a[i]]++;
        }
        else
            continue;
    }
}

int main()
{
    faster();
    testCase();
    return 0;
}
