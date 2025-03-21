#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e6 + 5;

int n;

void analize(vector<int> &v)
{
    int m = v.size();
    cout << "(";
    for (int i = 0; i < m - 1; i++)
        cout << v[i] << " ";
    cout << v[m - 1];
    cout << ") ";
    for (int i = m - 1; i >= 0; i--)
    {
        if (v[i] > 1)
        {
            --v[i];
            vector<int> res;
            int sum = 0;
            for (int j = 0; j <= i; j++)
            {
                res.push_back(v[j]);
                sum += v[j];
            }
            while (sum + v[i] <= n)
            {
                res.push_back(v[i]);
                sum += v[i];
            }
            if (sum < n)
                res.push_back(n - sum);
            analize(res);
            break;
        }
    }
}

void testCase()
{
    cin >> n;
    vector<int> v;
    v.push_back(n);
    analize(v);
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
