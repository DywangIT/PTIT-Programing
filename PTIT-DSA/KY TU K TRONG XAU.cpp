#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e6 + 5;

ll n, k;
vector<ll> arr;
void make()
{
    arr.push_back(0);
    for (int i = 1; i <= 25; i++)
        arr.push_back(arr[i - 1] * 2 + 1);
}
void search(ll n, ll k)
{
    if (k == arr[n] / 2 + 1)
    {
        cout << char(n + 64);
        return;
    }
    else if (k > arr[n] / 2 + 1)
    {
        search(n - 1, k - (arr[n] / 2 + 1));
    }
    else
        search(n - 1, k);
}

void testCase()
{
    cin >> n >> k;
    search(n, k);
}

int main()
{
    faster();
    make();
    int t;
    cin >> t;
    while (t--)
    {
        testCase();
        cout << endl;
    }
    return 0;
}
