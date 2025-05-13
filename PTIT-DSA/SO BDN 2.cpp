#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAXN = 1e6 + 5;
const int MOD = 1e9 + 7;

ll n;
bool ok;

void input() {
    cin >> n;
    ok = false;
}
    
void solve() {
    queue<ll> Q;
    Q.push(1);
    while (!Q.empty()) {
        ll top = Q.front();
        Q.pop();
        if (top % n == 0) {
            cout << top;
            return;
        }
        Q.push(top * 10);
        Q.push(top * 10 + 1);
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
