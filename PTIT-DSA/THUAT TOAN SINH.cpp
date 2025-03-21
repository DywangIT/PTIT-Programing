#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e6 + 5;

bool check(string s)
{
    int n = s.size();
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - i - 1])
            return false;
    }
    return true;
}

void testCase()
{
    int n;
    cin >> n;
    int total = 1 << n;
    for (int i = 0; i < total; i++)
    {
        string tmp = bitset<16>(i).to_string().substr(16 - n);
        if (check(tmp))
        {
            for (auto x : tmp)
                cout << x << " ";
            cout << endl;
        }
    }
}

int main()
{
    faster();
    testCase();
    return 0;
}
