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
    char a, b;
    cin >> a >> b;
    if (a > b)
        swap(a, b);
    for (int i = a - '0'; i <= b - '0'; i++)
        v.push_back(i);

    do
    {
        for (auto x : v)
            cout << char(x + '0');
        cout << endl;
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
