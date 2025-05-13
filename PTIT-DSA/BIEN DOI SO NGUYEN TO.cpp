#include<bits/stdc++.h>
using namespace std;

vector<bool> isPrime;
void prepare() {
    isPrime.assign(10000, false);
    for (int i = 1000; i <= 9999; i++) {
        bool is_prime = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime) isPrime[i] = true;
    }
}

string s, t;

void solve() {
    queue<pair<string, int>> Q;
    unordered_set<string> vis;
    Q.push({ s, 0 });
    vis.insert(s);
    while (!Q.empty()) {
        string num = Q.front().first;
        int steps = Q.front().second;
        Q.pop();
        if (num == t) {
            cout << steps;
            return;
        }

        for (int i = 0; i < 4; i++) {
            for (int j = 0; j <= 9; j++) {
                if (j == 0 && i == 0) continue;
                string new_num = num;
                if (j + '0' != new_num[i]) {
                    new_num[i] = j + '0';
                    if (isPrime[stoi(new_num)] && !vis.count(new_num)) {
                        Q.push({ new_num, steps + 1 });
                        vis.insert(new_num);
                    }
                }
            }
        }
    }
}

void testcase() {
    cin >> s >> t;
    solve();
}

int main() {
    prepare();
    int t = 1;
    cin >> t;
    while (t--) {
        testcase();
        cout << endl;
    }
    return 0;
}