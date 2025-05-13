#include<bits/stdc++.h>
using namespace std;

int n;
string s, st, en;
set<string> se;

void testcase() {
    cin >> n >> st >> en;
    se.clear();
    while (n--) {
        cin >> s;
        se.insert(s);
    }

    queue<pair<string, int>> Q;
    Q.push({ st, 1 });
    while (!Q.empty()) {
        string cur = Q.front().first;
        int steps = Q.front().second;
        Q.pop();

        if (cur == en) {
            cout << steps;
            return;
        }

        auto it = se.begin();

        for (int i = 0; i < cur.size(); i++) {
            for (char c = 'A'; c <= 'Z'; c++) {
                string tmp = cur;
                tmp[i] = c;
                if (se.count(tmp)) {
                    Q.push({ tmp, steps + 1 });
                    se.erase(tmp);
                }
            }
        }

    }
    cout << -1;
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