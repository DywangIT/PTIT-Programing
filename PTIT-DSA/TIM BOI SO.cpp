#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e6 + 5;

int n;

void testCase()
{
    cin >> n;
    queue<ll> q;
    q.push(9);
    while (!q.empty())
    {
        ll num = q.front();
        q.pop();
        if (num % n == 0)
        {
            cout << num << endl;
            return;
        }
        q.push(num * 10);
        q.push(num * 10 + 9);
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
    }
    return 0;
}
