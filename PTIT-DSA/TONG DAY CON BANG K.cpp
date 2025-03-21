#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e6 + 5;

void solve(int a[], int n, int k, string s, int &cnt)
{
    int sum = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
            sum += a[i];
    }
    if (sum == k)
    {
        ++cnt;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
                cout << a[i] << " ";
        }
        cout << endl;
    }
}

void testCase()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int total = 1 << n;
    int cnt = 0;
    for (int i = 0; i < total; i++)
    {
        string s = bitset<16>(i).to_string().substr(16 - n);
        solve(a, n, k, s, cnt);
    }
    cout << cnt;
}

int main()
{
    faster();
    testCase();
    return 0;
}
