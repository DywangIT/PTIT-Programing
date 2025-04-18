#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAXN = 1e6 + 5;
const int MOD = 1e9 + 7;

vector<string> to_suffix(string s) {
    // toán tử, toán hạng và dấu ngoặc '()'
    vector<string> v;
    int size = s.size();
    for (int i = 0; i < size; i++) {
        if (isdigit(s[i])) {
            string tmp = "";
            while (isdigit(s[i]) && i < size) {
                tmp += s[i];
                ++i;
            }
            --i;
            v.push_back(tmp);
        }
        else v.push_back(string(1, s[i]));
    }
    // biến đổi sang hậu tố
    vector<string> suffix;
    stack<string> oper;

    for (string x : v) {
        if (x == "(") oper.push(x);
        else if (x == "*" || x == "/") {
            while (!oper.empty() && (oper.top() == "*" || oper.top() == "/")) {
                suffix.push_back(oper.top());
                oper.pop();
            }
            oper.push(x);
        }
        else if (x == "+" || x == "-") {
            while (!oper.empty() && (oper.top() == "*" || oper.top() == "/" || oper.top() == "+" || oper.top() == "-")) {
                suffix.push_back(oper.top());
                oper.pop();
            }
            oper.push(x);
        }
        else if (x == ")") {
            while (oper.top() != "(") {
                suffix.push_back(oper.top());
                oper.pop();
            }
            oper.pop();
        }
        else suffix.push_back(x);
    }
    while (!oper.empty()) {
        suffix.push_back(oper.top());
        oper.pop();
    }
    return suffix;
}

ll calSuffixExp(vector<string> suffixExp) {
    stack<ll> st;

    for (string x : suffixExp) {
        if (x == "+" || x == "-" || x == "*" || x == "/") {
            ll b = st.top(); st.pop();
            ll a = st.top(); st.pop();
            if (x == "+") st.push(a + b);
            if (x == "-") st.push(a - b);
            if (x == "*") st.push(a * b);
            if (x == "/") st.push(a / b);
        }
        else {
            ll tmp = 0;
            for (char c : x) {
                tmp = tmp * 10 + c - '0';
            }
            st.push(tmp);
        }
    }
    return st.top();
}

string s;

void input() {
    cin >> s;
}

void solve() {
    vector<string> suffixExp = to_suffix(s);
    cout << calSuffixExp(suffixExp);
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
