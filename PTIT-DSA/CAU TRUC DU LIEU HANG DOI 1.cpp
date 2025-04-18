#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAXN = 1e6 + 5;
const int MOD = 1e9 + 7;

int n; // so luong truy van

void input() {
    cin >> n;
}

void solve() {
    queue<int> q;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        switch (x) {
        case 1:
            cout << q.size() << endl;
            break;
        case 2:
            cout << (q.empty() ? "YES" : "NO") << endl;
            break;
        case 3:
            int m; cin >> m;
            q.push(m);
            break;
        case 4:
            if (!q.empty()) q.pop();
            break;
        case 5:
            if (!q.empty()) cout << q.front() << endl;
            else cout << -1 << endl;
            break;
        case 6:
            if (!q.empty()) cout << q.back() << endl;
            else cout << -1 << endl;
            break;
        default:
            break;
        }
    }
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
