#include<bits/stdc++.h>
using namespace std;

typedef string bint;

bint operator* (bint a, int b) {
    if (a == "0" || b == 0) return "0";

    bint res(a.size(), '0');
    int nho = 0;
    for (int i = a.size() - 1; i >= 0; i--) {
        nho += (a[i] - '0') * b;
        res[i] = nho % 10 + '0';
        nho /= 10;
    }
    if (nho) res = to_string(nho) + res;
    return res;
}

bint catalan(int n) {
    vector<int> tu;
    for (int i = n + 2; i <= 2 * n; i++) tu.push_back(i);
    for (int i = 2; i <= n; i++) {
        int x = i;
        for (int j = 0; j < tu.size() && x > 1; j++) {
            int d = __gcd(x, tu[j]);
            tu[j] /= d;
            x /= d;
        }
    }

    bint res = "1";
    for (int& t : tu) res = res * t;
    return res;
}

void testcase() {
    int n;
    cin >> n;
    cout << catalan(n);
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        testcase();
        cout << '\n';
    }
    return 0;
}