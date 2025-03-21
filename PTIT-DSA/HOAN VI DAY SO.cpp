#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e6 + 5;

void testCase()
{
    int n;
    cin >> n;
    int b[n];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    sort(b, b + n);
    do
    {
        for (int i = 0; i < n; i++)
            cout << b[i] << " ";
        cout << endl;
    } while (next_permutation(b, b + n));
}

int main()
{
    faster();
    // int t;
    // cin >> t;
    // while (t--)
    // {
    testCase();
    // }
    return 0;
}
