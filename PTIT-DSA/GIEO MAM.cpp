#include<bits/stdc++.h>
using namespace std;

int n, m;
vector<vector<int>> v;

int dx[] = { -1, 0, 0, 1 };
int dy[] = { 0, -1, 1, 0 };

void testcase() {
    cin >> n >> m;
    v.assign(n, vector<int>(m));
    queue<pair<pair<int, int>, int>> Q;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> v[i][j];
            if (v[i][j] == 2) Q.push({ {i, j}, 0 });
        }
    }

    vector<vector<int>> d(n, vector<int>(m, 0));

    while (!Q.empty()) {
        int curi = Q.front().first.first;
        int curj = Q.front().first.second;
        int steps = Q.front().second;
        Q.pop();

        for (int dir = 0; dir < 4; dir++) {
            int ni = curi + dx[dir];
            int nj = curj + dy[dir];

            if (ni >= 0 && ni < n && nj >= 0 && nj < m && v[ni][nj] == 1 && !d[ni][nj]) {
                Q.push({ {ni, nj}, steps + 1 });
                d[ni][nj] = steps + 1;
            }
        }
    }

    int res = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (d[i][j] == 0 && v[i][j] == 1) {
                cout << -1;
                return;
            }
            res = max(res, d[i][j]);
        }
    }
    cout << res;
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