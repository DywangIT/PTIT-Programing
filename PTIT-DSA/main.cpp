#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAXN = 1e6 + 5;
const int MOD = 1e9 + 7;

int n, m;
vector<vector<int>> v;

void input() {
    cin >> n >> m;
    v.assign(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) cin >> v[i][j];
    }
}

void solve() {
    queue<tuple<int, int, int>> q; // <x, y, price>
    q.push({ 0, 0, 0 });
    int ok = 0;
    while (!q.empty()) {
        auto info = q.front();
        q.pop();
        int x = get<0>(info);
        int y = get<1>(info);
        int cnt = get<2>(info);
        if(x == n - 1 && y == m - 1) {
            cout << cnt;
            ok = 1;
            return;
        }

        if (x + 1 < n) {
            int step = abs(v[x + 1][y] - v[x][y]);
            int newx = step + x;
            if (newx < n) q.push({ newx, y, cnt + 1 });
        }
        if (y + 1 < m) {
            int step = abs(v[x][y + 1] - v[x][y]);
            int newy = step + y;
            if (newy < m) q.push({ x, newy, cnt + 1 });
        }
        if (x + 1 < n && y + 1 < m) {
            int step = abs(v[x + 1][y + 1] - v[x][y]);
            int newx = x + step, newy = y + step;
            q.push({newx, newy, cnt + 1});
        }
    }
    if(!ok) cout << -1;
}

void testCase() {
    input();
    solve();
}

int main() {
    faster();
    int t = 1;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
    return 0;
}
