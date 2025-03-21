#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e6 + 5;

int n;

char sum_dir(char a, char b)
{
    if (a == '0')
    {
        if (b == '0')
            return '0';
        else
            return '1';
    }
    else
    {
        if (b == '0')
            return '1';
        return '0';
    }
}

void to_gray(string &s)
{
    string res = "";
    res += s[0];
    for (int i = 1; i < s.size(); i++)
    {
        res += sum_dir(s[i], s[i - 1]);
    }
    cout << res << endl;
}

void testCase()
{
    string s;
    cin >> s;
    to_gray(s);
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
