#include<bits/stdc++.h>
using namespace std;

int s, t;

void solve() {
    queue<pair<int, int>> Q;
    vector<bool> vis(1e5, false);
    Q.push({ s, 0 });
    vis[s] = true;
    while (!Q.empty()) {
        int cur_s = Q.front().first;
        int cnt = Q.front().second;
        Q.pop();
        if (cur_s == t) {
            cout << cnt;
            return;
        }
        if (cur_s < t && cur_s * 2 >= 0 && !vis[cur_s * 2]) {
            Q.push({ cur_s * 2, cnt + 1 });
            vis[cur_s * 2] = true;
        }
        if (cur_s - 1 >= 0 && !vis[cur_s - 1]) {
            Q.push({ cur_s - 1, cnt + 1 });
            vis[cur_s - 1] = true;
        }
    }
}

void testcase() {
    cin >> s >> t;
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