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
vector<int> v;
vector<string> res;
vector<vector<int>> grid(1005, vector<int>(1005));
string s;

void Move(int n, char a, char b, char c)
{
    if (n == 1)
        cout << a << " -> " << c << endl;
    else
    {
        Move(n - 1, a, c, b);
        cout << a << " -> " << c << endl;
        Move(n - 1, b, a, c);
    }
}
// A -> C
void testCase()
{
    cin >> n;
    Move(n, 'A', 'B', 'C');
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
