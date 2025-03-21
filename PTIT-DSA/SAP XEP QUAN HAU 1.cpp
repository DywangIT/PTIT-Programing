#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e6 + 5;

int n, m, k, ok;
// vector<int> a;
// vector<int> v;
// vector<vector<int>> res;
// vector<vector<int>> grid(1005, vector<int>(1005));
// string s;

void timcach(vector<bool> &a, vector<bool> &b, vector<bool> &c, int hang)
{
    if (hang == n)
    {
        ++ok;
        return;
    }
    for (int j = 0; j < n; j++)
    {
        if (!a[j] && !b[hang - j + n - 1] && !c[hang + j])
        {
            a[j] = b[hang - j + n - 1] = c[hang + j] = true;
            timcach(a, b, c, hang + 1);
            a[j] = b[hang - j + n - 1] = c[hang + j] = false;
        }
    }
}

void testCase()
{
    cin >> n;
    ok = 0;
    vector<bool> cot(n, false);
    vector<bool> cheochinh(n, false);
    vector<bool> cheophu(n, false);

    timcach(cot, cheochinh, cheophu, 0);
    cout << ok << endl;
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
