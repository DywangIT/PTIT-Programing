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
    deque<int> q;
    for (int i = 0; i < n; i++) {
        string x; cin >> x;
        if (x == "PUSHBACK") {
            int m; cin >> m;
            q.push_back(m);
        }
        else if (x == "PUSHFRONT") {
            int m; cin >> m;
            q.push_front(m);
        }
        else if (x == "POPFRONT") {
            if (!q.empty()) q.pop_front();
        }
        else if (x == "POPBACK") {
            if (!q.empty()) q.pop_back();
        }
        else if (x == "PRINTFRONT") {
            if (!q.empty()) {
                cout << q.front() << endl;
            }
            else {
                cout << "NONE" << endl;
            }
        }
        else if (x == "PRINTBACK") {
            if (!q.empty()) {
                cout << q.back() << endl;
            }
            else {
                cout << "NONE" << endl;
            }
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
    // cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
    return 0;
}
