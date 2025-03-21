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
vector<vector<int>> res;
vector<vector<int>> grid(1005, vector<int>(1005));
string s;

void testCase()
{
    cin >> s;
    do
    {
        cout << s << " ";
    } while (next_permutation(s.begin(), s.end()));
    cout << endl;
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
