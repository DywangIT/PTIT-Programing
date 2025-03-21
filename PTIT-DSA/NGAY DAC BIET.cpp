#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e6 + 5;

// int n, m, k, ok;
// vector<int> a;
// vector<int> v;
vector<string> res;
// vector<vector<int>> grid(1005, vector<int>(1005));
// string s;

void testCase()
{
    vector<string> ngay = {"02", "20", "22"};
    vector<string> thang = {"02"};
    vector<string> nam = {"2000", "2002", "2020", "2200", "2220", "2202", "2022", "2222"};
    for (int i = 0; i < ngay.size(); i++)
    {
        for (int j = 0; j < thang.size(); j++)
        {
            for (int k = 0; k < nam.size(); k++)
            {
                string tmp = ngay[i] + "/" + thang[j] + "/" + nam[k];
                res.push_back(tmp);
            }
        }
    }
    sort(res.begin(), res.end());
    for (auto x : res)
        cout << x << endl;
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
