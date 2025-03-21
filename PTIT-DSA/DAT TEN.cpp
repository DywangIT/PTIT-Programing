#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e6 + 5;

int n, k;
vector<string> v;
vector<string> convert_name;

void convert(int st)
{
    if (convert_name.size() == k)
    {
        for (auto x : convert_name)
            cout << x << " ";
        cout << endl;
        return;
    }
    for (int i = st; i < v.size(); i++)
    {
        convert_name.push_back(v[i]);
        convert(i + 1);
        convert_name.pop_back();
    }
}

void testCase()
{
    cin >> n >> k;
    v.clear();
    set<string> se;
    for (int i = 0; i < n; i++)
    {
        string name;
        cin >> name;
        se.insert(name);
    }
    for (auto x : se)
    {
        v.push_back(x);
    }

    convert(0);
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
