#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e6 + 5;

char togray(char a, char b)
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

string transform(string &s)
{
    int n = s.size();
    string res = "";
    res += s[0];
    for (int i = 1; i < n; i++)
    {
        res += togray(res[i - 1], s[i]);
    }
    return res;
}

void testCase()
{
    string s;
    cin >> s;
    cout << transform(s) << endl;
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
