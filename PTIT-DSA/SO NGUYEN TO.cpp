#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e6 + 5;

int n, s, p, cnt;
vector<vector<int>> res;
vector<int> v;
vector<bool> isprime(MAX_N);
vector<int> primes;

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
    for (int i = 2; i < MAX_N; i++)
    {
        if (isprime[i])
            primes.push_back(i);
    }
}

void print(vector<int> &v)
{
    for (auto x : v)
        cout << x << " ";
    cout << endl;
}

void timdayso(int st, int sum)
{
    if (sum == s && v.size() == n)
    {
        ++cnt;
        res.push_back(v);
        return;
    }
    if (sum > s || v.size() >= n)
        return;
    for (int i = st; i < primes.size(); i++)
    {
        if (sum + primes[i] > s)
            break;
        v.push_back(primes[i]);
        timdayso(i + 1, sum + primes[i]);
        v.pop_back();
    }
}

void testCase()
{
    cin >> n >> p >> s;
    cnt = 0;
    res.clear();
    int st = upper_bound(primes.begin(), primes.end(), p) - primes.begin();
    timdayso(st, 0);
    cout << cnt << endl;
    for (auto &x : res)
        print(x);
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
    }
    return 0;
}
