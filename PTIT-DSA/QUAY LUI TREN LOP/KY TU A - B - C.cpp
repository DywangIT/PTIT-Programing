#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e6 + 5;

int n, k;
vector<int> a;
vector<int> v;
vector<string> res;
string s;

bool check(string s)
{
    int a = 0, b = 0, c = 0;
    for (auto x : s)
    {
        if (x == 'A')
            ++a;
        if (x == 'B')
            ++b;
        if (x == 'C')
            ++c;
    }
    if (a == 0 || b == 0 || c == 0 || a > b || b > c)
        return false;
    return true;
}

void layxauabc(int i)
{
    if (s.size() > n)
        return;
    if (check(s))
        res.push_back(s);
    s.push_back('A');
    layxauabc(i + 1);
    s.pop_back();
    s.push_back('B');
    layxauabc(i + 1);
    s.pop_back();
    s.push_back('C');
    layxauabc(i + 1);
    s.pop_back();
}

bool cmp(string a, string b)
{
    if (a.size() != b.size())
        return a.size() < b.size();
    return a < b;
}

void testCase()
{
    cin >> n;
    s.clear();
    layxauabc(0);
    sort(res.begin(), res.end(), cmp);
    for (auto x : res)
        cout << x << endl;
}

int main()
{
    faster();
    // int t;
    // cin >> t;
    // while (t--)
    // {
    testCase();
    // }
    return 0;
}
