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

void testCase()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        if (i != k)
            v.push_back(i);
    }
    do
    {
        for (auto x : v)
            cout << x << " ";
        cout << k << endl;
    } while (next_permutation(v.begin(), v.end()));
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
