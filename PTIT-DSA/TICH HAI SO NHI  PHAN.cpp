#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e6 + 5;

string a, b;

ll transToTP(string s)
{
    ll res = 0;
    for (int i = 0; i < s.size(); i++)
    {
        res += (s[i] - '0') * (1 << (s.size() - i - 1));
    }
    return res;
}

void testCase()
{
    cin >> a >> b;
    cout << transToTP(a) * transToTP(b);
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
