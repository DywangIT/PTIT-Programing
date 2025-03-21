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

void testCase()
{
    cin >> n;
    queue<pair<int, int>> q;
    unordered_set<int> vis;

    q.push({n, 0});
    vis.insert(n);
    while (!q.empty())
    {
        int num = q.front().first;
        int cnt = q.front().second;
        q.pop();
        if (num == 1)
        {
            cout << cnt;
            return;
        }
        else
        {
            if (num % 3 == 0 && vis.find(num / 3) == vis.end())
            {
                q.push({num / 3, cnt + 1});
                vis.insert(num / 3);
            }
            if (num % 2 == 0 && vis.find(num / 2) == vis.end())
            {
                q.push({num / 2, cnt + 1});
                vis.insert(num / 2);
            }
            if (vis.find(num - 1) == vis.end())
            {
                q.push({num - 1, cnt + 1});
                vis.insert(num - 1);
            }
        }
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
        cout << endl;
    }
    return 0;
}
