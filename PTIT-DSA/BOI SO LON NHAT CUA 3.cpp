#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> v;

void solve() {
    vector<int> du0, du1, du2;
    for (int x : v) {
        if (x % 3 == 0) du0.push_back(x);
        if (x % 3 == 1) du1.push_back(x);
        if (x % 3 == 2) du2.push_back(x);
    }

    sort(du1.begin(), du1.end());
    sort(du2.begin(), du2.end());

    int sum = accumulate(v.begin(), v.end(), 0);
    if (sum % 3 == 1) {
        if (!du1.empty()) du1.erase(du1.begin());
        else if (du2.size() >= 2) du2.erase(du2.begin(), du2.begin() + 2);
        else {
            cout << -1;
            return;
        }
    }
    else if (sum % 3 == 2) {
        if (!du2.empty()) du2.erase(du2.begin());
        else if (du1.size() >= 2) du1.erase(du1.begin(), du1.begin() + 2);
        else {
            cout << -1;
            return;
        }
    }
    vector<int> res;
    for (auto x : du0) res.push_back(x);
    for (auto x : du1) res.push_back(x);
    for (auto x : du2) res.push_back(x);
    if (res.empty()) {
        cout << -1;
        return;
    }
    sort(res.begin(), res.end(), greater<int>());
    if (res[0] == 0) {
        cout << 0;
        return;
    }
    for (auto x : res) cout << x;
}

void testcase() {
    cin >> n;
    v.resize(n);
    for (int& x : v) cin >> x;
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