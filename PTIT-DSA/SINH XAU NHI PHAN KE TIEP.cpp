#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e6 + 5;

void testCase()
{
    string s;
    cin >> s;
    int n = s.size();
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == '1')
        {
            s[i] = '0';
        }
        else
        {
            s[i] = '1';
            break;
        }
    }
    cout << s << endl;
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
