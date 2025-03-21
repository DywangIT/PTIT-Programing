#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

ll n, k;
vector<ll> fi;
void make()
{
    fi.push_back(0);
    fi.push_back(1);
    for (int i = 2; i <= 92; i++)
        fi.push_back(fi[i - 1] + fi[i - 2]);
}

void search(ll n, ll k)
{
    if (k == 1 && n == 1)
    {
        cout << "0";
        return;
    }
    else if (k == 1 && n == 2)
    {
        cout << '1';
        return;
    }
    if (k > fi[n - 2])
        search(n - 1, k - fi[n - 2]);
    else
        search(n - 2, k);
}

void testCase()
{
    cin >> n >> k;
    search(n, k);
}

int main()
{
    faster();
    make();
    int t;
    cin >> t;
    while (t--)
    {
        testCase();
        cout << endl;
    }
    return 0;
}
