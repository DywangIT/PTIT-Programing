#include<bits/stdc++.h>
using namespace std;

int l, r, cnt;

void gen(int i, vector<bool>& used) {
    if (i > r) return;
    if (i >= l) ++cnt;

    for (int j = 0; j <= 5; j++) {
        if (!used[j]) {
            used[j] = true;
            gen(i * 10 + j, used);
            used[j] = false;
        }
    }
}

void solve() {
    vector<bool> used(6, false);
    for (int i = 1; i <= 5; i++) {
        used[i] = true;
        gen(i, used);
        used[i] = false;
    }
    cout << cnt;
}

void testcase() {
    cin >> l >> r;
    cnt = 0;
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