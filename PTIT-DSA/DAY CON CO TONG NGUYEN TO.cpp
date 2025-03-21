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
vector<vector<int>> res;
vector<bool> isprime(MAX_N);

void sieve()
{
    fill(isprime.begin(), isprime.end(), true);
    isprime[0] = isprime[1] = false;
    for (int i = 2; i * i < MAX_N; i++)
    {
        if (isprime[i])
        {
            for (int j = i * i; j < MAX_N; j += i)
                isprime[j] = false;
        }
    }
}

bool check()
{
    return isprime[accumulate(v.begin(), v.end(), 0)];
}

void layso(int st)
{
    if (check())
        res.push_back(v);
    if (st == n)
    {
        return;
    }
    for (int i = st; i < n; i++)
    {
        v.push_back(a[i]);
        layso(i + 1);
        v.pop_back();
    }
}

void testCase()
{
    cin >> n;
    a.clear();
    v.clear();
    res.clear();
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end(), greater<int>());

    layso(0);
    sort(res.begin(), res.end());
    for (int i = 0; i < res.size(); i++)
    {
        for (auto &x : res[i])
            cout << x << " ";
        cout << endl;
    }
}

int main()
{
    faster();
    sieve();
    int t;
    cin >> t;
    while (t--)
    {
        testCase();
        cout << endl;
    }
    return 0;
}
