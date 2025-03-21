#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e6 + 5;

bool check(string s, int k)
{
    int cnt = 0;
    for (auto x : s)
        cnt += x == '1' ? 1 : 0;
    return cnt == k;
}

void testCase()
{
    int n, k;
    cin >> n >> k;
    int total = 1 << n;
    for (int i = 0; i < total; i++)
    {
        string s = bitset<16>(i).to_string().substr(16 - n);
        if (check(s, k))
            cout << s << endl;
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
