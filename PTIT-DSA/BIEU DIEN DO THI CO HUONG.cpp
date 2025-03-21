#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e6 + 5;

int n, m;
vector<vector<int>> graph;

void testCase()
{
    cin >> n >> m;
    graph.assign(n + 1, vector<int>());

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
    }

    for (int i = 1; i <= n; i++)
    {
        cout << i << ": ";
        for (int x : graph[i])
            cout << x << " ";
        cout << endl;
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
