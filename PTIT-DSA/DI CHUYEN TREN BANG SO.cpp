#include<bits/stdc++.h>
using namespace std;
const int INF = 1e9;
typedef pair<int, int> pii;

int n, m;
vector<vector<int>> v;
vector<vector<int>> price;

int dx[] = { -1, 0, 0, 1 };
int dy[] = { 0, -1, 1, 0 };

void testcase() {
    cin >> n >> m;
    v.assign(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) cin >> v[i][j];
    }

    price.assign(n, vector<int>(m, INT_MAX));
    price[0][0] = v[0][0];

    priority_queue<pair<int, pii>, vector<pair<int, pii>>, greater<pair<int, pii>>> Q;
    Q.push({ price[0][0], {0, 0} });
    while (!Q.empty()) {
        auto top = Q.top();
        Q.pop();

        int pr = top.first;
        int curx = top.second.first;
        int cury = top.second.second;

        if (pr < price[curx][cury] || (curx == n - 1 && cury == m - 1)) continue;

        for (int dir = 0; dir < 4; dir++) {
            int nx = curx + dx[dir];
            int ny = cury + dy[dir];

            if (nx >= 0 && nx < n && ny >= 0 && ny < m && price[curx][cury] + v[nx][ny] < price[nx][ny]) {
                price[nx][ny] = price[curx][cury] + v[nx][ny];
                Q.push({ price[nx][ny], {nx, ny} });
            }
        }
    }
    cout << price[n - 1][m - 1];
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        testcase();
        cout << '\n';
    }
    return 0;
}