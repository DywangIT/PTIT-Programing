#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAXN = 1e6 + 5;
const int MOD = 1e9 + 7;

bool isPrime[136];

int digitSum(ll n) {
    int s = 0;
    while (n) {
        s += n % 10;
        n /= 10;
    }
    return s;
}

void sieve() {
    for (int i = 2; i <= 135; i++) {
        isPrime[i] = true;
    }

    for (int i = 2; i * i <= 135; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= 135; j += i) isPrime[j] = false;
        }
    }
}

bool isSpecial(ll n) {
    return isPrime[digitSum(n)];
}


ll n;

void input() {
    cin >> n;
}

void solve() {
    int count = 0;
    for (ll y = 1; 2 * y < n; ++y) {
        ll x = n - 2 * y;
        if (isSpecial(x) && isSpecial(y)) ++count;
    }
    cout << count;
}

void testCase() {
    input();
    solve();
}

int main() {
    sieve();
    faster();
    int t = 1;
    // cin >> t;
    while (t--) {
        testCase();
        cout << endl;
    }
    return 0;
}
