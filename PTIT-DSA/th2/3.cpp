#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll calc(ll a, ll b, const string& op) {
    if (op == "+") return a + b;
    if (op == "-") return a - b;
    if (op == "*") return a * b;
    return a / b;
}

ll toLongLong(const string& s) {
    ll res = 0;
    int i = 0, sign = 1;
    if (s[0] == '-') {
        sign = -1;
        i = 1;
    }
    for (; i < s.size(); i++) {
        res = res * 10 + (s[i] - '0');
    }
    return res * sign;
}

bool isOperator(const string& s) {
    return s == "+" || s == "-" || s == "*" || s == "/";
}

ll evaluatePrefix(vector<string>& tokens) {
    stack<ll> st;
    for (int i = tokens.size() - 1; i >= 0; i--) {
        const string& token = tokens[i];
        if (isOperator(token)) {
            ll a = st.top(); st.pop();
            ll b = st.top(); st.pop();
            st.push(calc(a, b, token));
        }
        else {
            st.push(toLongLong(token));
        }
    }
    return st.top();
}

ll evaluatePostfix(vector<string>& tokens) {
    stack<ll> st;
    for (const string& token : tokens) {
        if (isOperator(token)) {
            ll b = st.top(); st.pop();
            ll a = st.top(); st.pop();
            st.push(calc(a, b, token));
        }
        else {
            st.push(toLongLong(token));
        }
    }
    return st.top();
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<string> tokens(n);
        for (int i = 0; i < n; i++) {
            cin >> tokens[i];
        }
        if (isOperator(tokens[0])) {
            cout << evaluatePrefix(tokens) << endl;
        }
        else {
            cout << evaluatePostfix(tokens) << endl;
        }
    }
}