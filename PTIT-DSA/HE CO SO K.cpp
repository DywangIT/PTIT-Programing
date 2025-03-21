#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e6 + 5;

int k;
string a, b;

void tongHeSoK(string a, string b, int k)
{
    while (a.size() < b.size())
        a = '0' + a;
    while (b.size() < a.size())
        b = '0' + b;
    int du = 0;
    string res = "";
    for (int i = a.size() - 1; i >= 0; i--)
    {
        int sum = (a[i] - '0') + (b[i] - '0') + du;
        res = char(sum % k + '0') + res;
        du = sum / k;
    }
    if (du)
        res = char(du + '0') + res;
    cout << res;
}

void testCase()
{
    cin >> k >> a >> b;
    tongHeSoK(a, b, k);
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
