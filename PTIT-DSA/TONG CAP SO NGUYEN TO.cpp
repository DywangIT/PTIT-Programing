#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define maxn 1e6 + 5

vector<bool> is_prime(maxn);
void sieve()
{
    fill(is_prime.begin(), is_prime.end(), true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i < maxn; i++)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j < maxn; j += i)
                is_prime[j] = false;
        }
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
        int n;
        cin >> n;
        bool ok = false;
        for (int i = 0; i <= n / 2; i++)
        {
            if (is_prime[i] && is_prime[n - i])
            {
                cout << i << " " << n - i << endl;
                ok = true;
                break;
            }
        }
        if (!ok)
            cout << -1 << endl;
    }
    return 0;
}