#include<bits/stdc++.h>
using namespace std;

int n;

void solve() {
    queue<pair<int, int>> Q;
    unordered_set<int> vis;
    Q.push({ n, 0 });
    vis.insert(n);
    while (!Q.empty()) {
        int cur_n = Q.front().first, cnt = Q.front().second;
        Q.pop();

        if (cur_n == 1) {
            cout << cnt;
            return;
        }

        if (cur_n - 1 >= 0 && vis.find(cur_n - 1) == vis.end()) {
            Q.push({ cur_n - 1, cnt + 1 });
            vis.insert(cur_n - 1);
        }

        for (int i = 2; i <= sqrt(cur_n); i++) {
            if (cur_n % i == 0 && vis.find(cur_n / i) == vis.end()) {
                Q.push({ cur_n / i, cnt + 1 });
                vis.insert(cur_n / i);
            }
        }
    }
}

void testcase() {
    cin >> n;
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