#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e6 + 5;

int n, k, ok;
vector<int> a;
vector<int> v;
vector<vector<int>> res;
vector<vector<int>> grid(1005, vector<int>(1005));
string s;

int dx[] = {1, 0};
int dy[] = {0, 1};

void timduong(int i, int j)
{
    if (i == n - 1 && j == n - 1)
    {
        ok = 1;
        cout << s << " ";
        return;
    }
    for (int k = 0; k <= 1; k++)
    {
        int x = dx[k] + i;
        int y = dy[k] + j;
        if (x < n && y < n && grid[x][y] == 1)
        {
            if (k == 1)
                s += 'R';
            else
                s += 'D';
            timduong(x, y);
            s.pop_back();
        }
    }
}

void testCase()
{
    cin >> n;
    s.clear();
    ok = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> grid[i][j];
    }
    if (grid[0][0] == 0)
    {
        cout << -1 << endl;
        return;
    }
    else
        timduong(0, 0);
    if (!ok)
        cout << -1;
    cout << endl;
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
