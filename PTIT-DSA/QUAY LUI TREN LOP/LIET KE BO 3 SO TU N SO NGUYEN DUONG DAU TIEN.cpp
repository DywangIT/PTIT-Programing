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

void print()
{
    for (auto x : v)
        cout << x << " ";
    cout << endl;
}

void layboso(int st)
{
    if (st == n + 1)
        return;
    if (v.size() == k)
    {
        print();
        return;
    }
    for (int i = st; i <= n; i++)
    {
        v.push_back(i);
        layboso(i);
        v.pop_back();
    }
}

void testCase()
{
    cin >> n >> k;
    layboso(1);
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
