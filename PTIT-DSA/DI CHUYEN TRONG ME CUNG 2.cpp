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
vector<string> res;
vector<vector<int>> grid(1005, vector<int>(1005));
string s;

int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
char dir[] = {'L', 'R', 'U', 'D'};

void timduong(int i, int j)
{
    if (i == n - 1 && j == n - 1)
    {
        res.push_back(s);
        return;
    }
    for (int k = 0; k <= 3; k++)
    {
        int x = dx[k] + i;
        int y = dy[k] + j;
        if (x < n && y < n && x >= 0 && y >= 0 && grid[x][y] == 1)
        {
            s += dir[k];
            grid[x][y] = 0;
            timduong(x, y);
            s.pop_back();
            grid[x][y] = 1;
        }
    }
}

void testCase()
{
    cin >> n;
    s.clear();
    res.clear();
    grid.assign(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> grid[i][j];
    }
    if (grid[0][0] == 0 || grid[n - 1][n - 1] == 0)
    {
        cout << -1 << endl;
        return;
    }
    grid[0][0] = 0; // khong co la WA
    timduong(0, 0);
    if (res.empty())
        cout << -1;
    else
    {
        sort(res.begin(), res.end());
        for (auto &x : res)
            cout << x << " ";
    }

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
