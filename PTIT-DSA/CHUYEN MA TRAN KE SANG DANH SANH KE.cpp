#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e6 + 5;

int n;
vector<vector<int>> graph;

void testCase()
{
    cin >> n;
    graph.assign(n + 1, vector<int>());
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int x;
            cin >> x;
            if (x)
            {
                graph[i].push_back(j);
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        sort(graph[i].begin(), graph[i].end());
        for (auto x : graph[i])
            cout << x << " ";
        cout << endl;
    }
}

int main()
{
    faster();
    // int t;
    // cin >> t;
    // while (t--)
    // {
    testCase();
    //     cout << endl;
    // }
    return 0;
}
