#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e6 + 5;

int n, m, k, ok, sum;
vector<int> a;
vector<bool> vis;
vector<int> v;
vector<string> res;
vector<vector<int>> grid(1005, vector<int>(1005));
string s;

void laytapcon(int st)
{
    if (ok)
        return;
    if (sum == k)
    {
        ok = 1;
        return;
    }
    else if (sum > k)
        return;
    for (int i = st; i < n; i++)
    {
        sum += a[i];
        laytapcon(i + 1);
        sum -= a[i];
    }
}

void testCase()
{
    cin >> n;
    sum = 0;
    ok = 0;
    a.clear();
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }

    k = accumulate(a.begin(), a.end(), 0);
    if (k & 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        laytapcon(0);
        if (ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
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
