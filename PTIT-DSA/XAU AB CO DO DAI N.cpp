#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e6 + 5;

void testCase()
{
    int n;
    cin >> n;
    int total = 1 << n;
    for (int i = 0; i < total; i++)
    {
        string s = bitset<16>(i).to_string().substr(16 - n);
        for (auto x : s)
        {
            if (x == '0')
                cout << 'A';
            else
                cout << 'B';
        }
        cout << " ";
    }
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
