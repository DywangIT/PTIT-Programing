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
vector<string> v;
vector<string> convert_name;

void triangle(int cnt, vector<int> a)
{
    if (cnt == n)
        return;
    vector<int> t(n);
    for (int i = 0; i < n - cnt - 1; i++)
        t[i] = a[i] + a[i + 1];
    triangle(cnt + 1, t);
    cout << "[";
    for (int i = 0; i < n - cnt - 1; i++)
        cout << a[i] << " ";
    cout << a[n - cnt - 1];
    cout << "]" << " ";
}

void testCase()
{
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    triangle(0, a);
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
