#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e6 + 5;

int n, m, k, ok, sum;
vector<vector<int>> grid(1005, vector<int>(1005));

void timcach(vector<bool> &a, vector<bool> &b, vector<bool> &c, int hang)
{
    if (hang == n)
    {
        m = max(m, sum);
        return;
    }
    for (int j = 0; j < n; j++)
    {
        if (!a[j] && !b[hang - j + n - 1] && !c[hang + j])
        {
            a[j] = b[hang - j + n - 1] = c[hang + j] = true;
            sum += grid[hang][j];
            timcach(a, b, c, hang + 1);
            a[j] = b[hang - j + n - 1] = c[hang + j] = false;
            sum -= grid[hang][j];
        }
    }
}

void testCase(int t)
{
    n = 8, m = sum = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
            cin >> grid[i][j];
    }
    vector<bool> cot(n, false);
    vector<bool> cheochinh(n, false);
    vector<bool> cheophu(n, false);

    timcach(cot, cheochinh, cheophu, 0);
    cout << m << endl;
}

int main()
{
    faster();
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
        testCase(i);
    return 0;
}
