#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e6 + 5;

bool check(string s, int k, int Sum)
{
    int cout_1 = count(s.begin(), s.end(), '1');
    if (cout_1 != k)
        return false;
    int n = s.size();
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += s[i] == '1' ? i + 1 : 0;
    return sum == Sum;
}

void testCase()
{
    int n, k, s, cnt;
    while (true)
    {
        cin >> n >> k >> s;
        cnt = 0;
        if (n == 0 && k == 0 && s == 0)
            return;
        int a[k];
        iota(a, a + k, 1);
        if (accumulate(a, a + k, 0) == s)
            ++cnt;
        while (true)
        {
            int ok = 0;
            for (int i = k - 1; i >= 0; i--)
            {
                if (i == k - 1 && a[i] < n)
                {
                    ++a[i];
                    if (accumulate(a, a + k, 0) == s)
                        ++cnt;
                    ok = 1;
                    break;
                }
                else if (i < k - 1 && a[i] < a[i + 1] - 1)
                {
                    ++a[i];
                    for (int j = i + 1; j < k; j++)
                        a[j] = a[j - 1] + 1;
                    if (accumulate(a, a + k, 0) == s)
                        ++cnt;
                    ok = 1;
                    break;
                }
            }
            if (!ok)
                break;
        }
        cout << cnt << endl;
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
