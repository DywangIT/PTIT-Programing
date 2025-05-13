#include<bits/stdc++.h>
using namespace std;

int n;
vector<vector<char>> grid;
int a, b, x, y;

int dx[] = { -1, 0, 0, 1 };
int dy[] = { 0, -1, 1, 0 };

void testcase() {
    cin >> n;
    grid.assign(n, vector<char>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cin >> grid[i][j];
    }
    cin >> a >> b >> x >> y;

    queue<pair<pair<int, int>, int>> Q;
    vector<vector<bool>> vis(n, vector<bool>(n, false));
    Q.push({ {a, b}, 0 });
    vis[a][b] = true;

    while (!Q.empty()) {
        int curx = Q.front().first.first;
        int cury = Q.front().first.second;
        int steps = Q.front().second;
        Q.pop();

        if (curx == x && cury == y) {
            cout << steps;
            return;
        }

        for (int dir = 0; dir < 4; dir++) {
            int nx = curx;
            int ny = cury;
            while (true) {
                nx += dx[dir];
                ny += dy[dir];
                if (nx < 0 || nx >= n || ny < 0 || ny >= n || grid[nx][ny] == 'X') break;
                if (!vis[nx][ny]) {
                    vis[nx][ny] = true;
                    Q.push({ {nx, ny}, steps + 1 });
                }
            }
        }

    }
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        testcase();
        cout << endl;
    }
    return 0;
}