#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e6 + 5;

int n, m, k;
vector<int> a;
vector<int> v;
vector<string> res;

void boxing()
{
    string s = "(" + to_string(v[0]);
    for (int i = 1; i < v.size(); i++)
        s += " " + to_string(v[i]);
    s += ")";
    res.push_back(s);
}

void tachso()
{
    boxing();
    vector<int> v_cpy;
    int i = v.size() - 1;
    while (v[i] == 1)
        --i;
    if (i == -1)
        return;
    --v[i];
    for (int j = 0; j <= i; j++)
        v_cpy.push_back(v[j]);
    int sum_rest = n - accumulate(v_cpy.begin(), v_cpy.end(), 0);
    while (sum_rest >= v[i])
    {
        v_cpy.push_back(v[i]);
        sum_rest -= v[i];
    }
    if (sum_rest != 0)
        v_cpy.push_back(sum_rest);
    v = v_cpy;
    tachso();
}

void testCase()
{
    cin >> n;
    v.clear();
    res.clear();

    v.push_back(n);
    tachso();

    cout << res.size() << endl;
    for (auto &x : res)
        cout << x << " ";
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