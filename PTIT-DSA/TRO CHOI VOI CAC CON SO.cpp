#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e6 + 5;

int n, m, k, ok;
vector<int> a;
vector<bool> vis;
vector<int> v;
vector<string> res;
vector<vector<int>> grid(1005, vector<int>(1005));
string s;

void print()
{
    for (auto x : a)
        cout << x;
    cout << endl;
}

bool check()
{
    for (int i = 1; i < a.size(); i++)
    {
        if (abs(a[i] - a[i - 1]) == 1)
            return false;
    }
    return true;
}

void testCase()
{
    cin >> n;
    a.clear();
    for (int i = 1; i <= n; i++)
        a.push_back(i);

    do
    {
        if (check())
            print();
    } while (next_permutation(a.begin(), a.end()));
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
