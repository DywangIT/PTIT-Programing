#include<bits/stdc++.h>
using namespace std;


vector<int> st, en;

void solve() {
    queue<pair<vector<int>, int>> Q;
    set<vector<int>> vis;
    vis.insert(st);
    Q.push({ st, 0 });
    while (!Q.empty()) {
        vector<int> top = Q.front().first;
        int steps = Q.front().second;
        Q.pop();

        if (top == en) {
            cout << steps;
            return;
        }

        vector<int> tmp1 = top;
        int tmp = tmp1[0];
        tmp1[0] = tmp1[3];
        tmp1[3] = tmp1[4];
        tmp1[4] = tmp1[1];
        tmp1[1] = tmp;
        if (!vis.count(tmp1)) {
            Q.push({ tmp1, steps + 1 });
            vis.insert(tmp1);
        }

        vector<int> tmp2 = top;
        tmp = tmp2[1];
        tmp2[1] = tmp2[4];
        tmp2[4] = tmp2[5];
        tmp2[5] = tmp2[2];
        tmp2[2] = tmp;

        if (!vis.count(tmp2)) {
            Q.push({ tmp2, steps + 1 });
            vis.insert(tmp2);
        }
    }
}

void testcase() {
    st.resize(6);
    en.resize(6);
    for (int i = 0; i < 6; i++) cin >> st[i];
    for (int i = 0; i < 6; i++) cin >> en[i];
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