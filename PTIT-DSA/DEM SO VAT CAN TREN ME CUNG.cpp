#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

int n, m, cnt;
vector<vector<char>> grid(1005, vector<char>(1005));
vector<vector<int>> vis(1005, vector<int>(1005));

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

void tiepcan(int i, int j)
{
    vis[i][j] = 1;
    for (int k = 0; k < 4; k++)
    {
        int x = dx[k] + i;
        int y = dy[k] + j;
        if (x >= 1 && x <= n && y >= 1 && y <= m && grid[x][y] == '#' && !vis[x][y])
            tiepcan(x, y);
    }
}

void testCase()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cin >> grid[i][j];
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (grid[i][j] == '#' && !vis[i][j])
            {
                ++cnt;
                tiepcan(i, j);
            }
        }
    }
    cout << cnt;
}

int main()
{
    faster();
    testCase();
    return 0;
}
