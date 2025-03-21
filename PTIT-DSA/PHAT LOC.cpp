#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e6 + 5;

bool check(string &s)
{
    s = '1' + s;
    s += '0';
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (i + 1 < n && s[i] == '1' && s[i + 1] == '1')
            return false;
        if (i + 3 < n && s[i] == '0' && s[i + 1] == '0' && s[i + 2] == '0' && s[i + 3] == '0')
            return false;
    }
    return true;
}

void print(string s)
{
    for (auto x : s)
    {
        if (x == '0')
            cout << 6;
        else
            cout << 8;
    }
    cout << endl;
}

void testCase()
{
    int n;
    cin >> n;
    int total = 1 << n - 2;
    for (int i = 0; i < total; i++)
    {
        string s = bitset<16>(i).to_string().substr(16 - n + 2);
        if (check(s))
            print(s);
    }
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
