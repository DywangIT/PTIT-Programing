#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e6 + 5;

int n, m;
vector<int> a, b;

void print(vector<int> v)
{
    for (auto x : v)
        cout << x << " ";
}

vector<int> mul(vector<int> &a, vector<int> &b)
{
    vector<int> res(205, 0);
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < b.size(); j++)
            res[i + j] += a[i] * b[j];
    }
    while (res.back() == 0)
        res.pop_back();
    return res;
}

void testCase()
{
    cin >> n >> m;
    a.resize(n);
    b.resize(m);
    for (auto &x : a)
        cin >> x;
    for (auto &x : b)
        cin >> x;

    print(mul(a, b));
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        testCase();
        cout << endl;
    }
    return 0;
}
