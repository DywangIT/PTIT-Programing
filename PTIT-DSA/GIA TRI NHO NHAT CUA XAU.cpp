#include<bits/stdc++.h>
using namespace std;

string s;
int k;

void solve() {
    priority_queue<int> Q;
    unordered_map<char, int> M;
    for (char x : s) M[x]++;
    for (auto cnt : M) Q.push(cnt.second);
    while (k > 0 && !Q.empty()) {
        --k;
        int top = Q.top();
        Q.pop();
        if (top - 1) Q.push(top - 1);
    }
    long long res = 0;
    while (!Q.empty()) {
        res += 1LL * Q.top() * Q.top();
        Q.pop();
    }
    cout << res;
}

void testcase() {
    cin >> k >> s;
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