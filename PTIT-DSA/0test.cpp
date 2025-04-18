#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAXN = 1e6 + 5;
const int MOD = 1e9 + 7;

string s;

bool isO(string a)
{
    return a == "+" || a == "-" || a == "*" || a == "/";
}

int priority(string a)
{
    if (a == "+")
        return 0;
    if (a == "-")
        return 0;
    if (a == "*")
        return 1;
    return 1;
}

void input()
{
    cin >> s;
}

ll to_num(string a)
{
    ll ans = 0;
    for (char c : a)
        ans = ans * 10 + c - '0';
    return ans;
}
ll calculate(string x, string y, string op)
{
    int b = to_num(x);
    int a = to_num(y);
    if (op == "+")
        return a + b;
    else if (op == "-")
        return a - b;
    else if (op == "*")
        return a * b;
    else
        return a / b;
}

void solve()
{
    vector<string> v;
    for (int i = 0; i < s.size(); i++)
    {
        if (!isdigit(s[i]))
            v.push_back(string(1, s[i]));
        else
        {
            string tmp = "";
            while (isdigit(s[i]) && i < s.size())
            {
                tmp += s[i];
                ++i;
            }
            --i;
            v.push_back(tmp);
        }
    }

    stack<string> st;
    stack<string> oper;

    for (string a : v)
    {
        if (isO(a))
        {
            while (!oper.empty() && isO(oper.top()) && priority(a) <= priority(oper.top()))
            {
                st.push(oper.top());
                oper.pop();
            }
            oper.push(a);
        }
        else if (a == ")")
        {
            while (oper.top() != "(")
            {
                st.push(oper.top());
                oper.pop();
            }
            oper.pop(); // pop '('
        }
        else if (a == "(")
            oper.push(a);
        else
            st.push(a);
    }

    while (!oper.empty())
    {
        st.push(oper.top());
        oper.pop();
    }

    // Convert stack to postfix vector in correct order
    vector<string> postfix;
    while (!st.empty()) {
        postfix.push_back(st.top());
        st.pop();
    }
    reverse(postfix.begin(), postfix.end());

    // Evaluate postfix
    stack<ll> calc;
    for (string token : postfix) {
        if (!isO(token)) {
            calc.push(to_num(token));
        } else {
            ll b = calc.top(); calc.pop();
            ll a = calc.top(); calc.pop();
            ll res = 0;
            if (token == "+") res = a + b;
            else if (token == "-") res = a - b;
            else if (token == "*") res = a * b;
            else if (token == "/") res = a / b;
            calc.push(res);
        }
    }
    cout << calc.top();
}

void testCase()
{
    input();
    solve();
}

int main()
{
    faster();
    int t = 1;
    cin >> t;
    while (t--)
    {
        testCase();
        cout << endl;
    }
    return 0;
}
