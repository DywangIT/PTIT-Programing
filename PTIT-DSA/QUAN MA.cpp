#include<bits/stdc++.h>
using namespace std;

string st, en;
pair<int, int> ST, EN;

int X(char c) {
    if (c == 'a') return 1;
    if (c == 'b') return 2;
    if (c == 'c') return 3;
    if (c == 'd') return 4;
    if (c == 'e') return 5;
    if (c == 'f') return 6;
    if (c == 'g') return 7;
    if (c == 'h') return 8;
}

bool valid(int x, int y) {
    return x >= 1 && x <= 8 && y >= 1 && y <= 8;
}

void solve() {
    queue<pair<pair<int, int>, int>> Q;
    vector<vector<bool>> vis(9, vector<bool>(9, false));
    Q.push({ ST, 0 });
    vis[ST.first][ST.second] = true;
    while (!Q.empty()) {
        pair<int, int> top = Q.front().first;
        int cnt = Q.front().second;
        Q.pop();

        if (top == EN) {
            cout << cnt;
            return;
        }

        int x = top.first, y = top.second;
        if (valid(x - 2, y - 1) && !vis[x - 2][y - 1]) {
            Q.push({ {x - 2, y - 1}, cnt + 1 });
            vis[x - 2][y - 1] = true;
        }
        if (valid(x - 2, y + 1) && !vis[x - 2][y + 1]) {
            Q.push({ {x - 2, y + 1}, cnt + 1 });
            vis[x - 2][y + 1] = true;
        }

        if (valid(x + 2, y - 1) && !vis[x + 2][y - 1]) {
            Q.push({ {x + 2, y - 1}, cnt + 1 });
            vis[x + 2][y - 1] = true;
        }
        if (valid(x + 2, y + 1) && !vis[x + 2][y + 1]) {
            Q.push({ {x + 2, y + 1}, cnt + 1 });
            vis[x + 2][y + 1] = true;
        }

        if (valid(x + 1, y + 2) && !vis[x + 1][y + 2]) {
            Q.push({ {x + 1, y + 2}, cnt + 1 });
            vis[x + 1][y + 2] = true;
        }
        if (valid(x + 1, y - 2) && !vis[x + 1][y - 2]) {
            Q.push({ {x + 1, y - 2}, cnt + 1 });
            vis[x + 1][y - 2] = true;
        }

        if (valid(x - 1, y - 2) && !vis[x - 1][y - 2]) {
            Q.push({ {x - 1, y - 2}, cnt + 1 });
            vis[x - 1][y - 2] = true;
        }
        if (valid(x - 1, y + 2) && !vis[x - 1][y + 2]) {
            Q.push({ {x - 1, y + 2}, cnt + 1 });
            vis[x - 1][y + 2] = true;
        }
    }
}

void testcase() {
    cin >> st >> en;
    ST = make_pair(X(st[0]), st[1] - '0');
    EN = make_pair(X(en[0]), en[1] - '0');
    solve();
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