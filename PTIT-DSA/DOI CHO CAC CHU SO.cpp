#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e6 + 5;

int n, k, ok;
vector<int> a;
vector<int> v;
vector<string> res;
vector<vector<int>> grid(1005, vector<int>(1005));
string s;

void change(int st)
{
    if (st == s.size() - 1 || k == 0)
        return;
    auto it = max_element(s.rbegin(), s.rend() + v.size() - st - 1);
    if (*it > s[st])
    {
        swap(s[st], *it);
        --k;
    }
    change(st + 1);
}

void testCase()
{
    cin >> k >> s;
    change(0);
    cout << s << endl;
    // auto it = max_element(s.rbegin(), s.rend() + v.size() - 1);
    // cout << *it << endl;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        testCase();
    }
    return 0;
}
