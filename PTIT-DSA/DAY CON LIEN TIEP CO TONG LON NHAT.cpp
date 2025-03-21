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
    a.clear();
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }

    int maxSum = a[0], curSum = a[0];
    for (int i = 1; i < n; i++)
    {
        curSum = max(curSum + a[i], a[i]);
        maxSum = max(maxSum, curSum);
    }
    cout << maxSum;
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
