#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void timBitMot(ll k)
{
    int pos = 1;
    while ((k & 1) == 0)
    {
        k >>= 1;
        pos++;
    }
    cout << pos;
}

void testCase()
{
    ll n, k;
    cin >> n >> k;
    timBitMot(k);
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
