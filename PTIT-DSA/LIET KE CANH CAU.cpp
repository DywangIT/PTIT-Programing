#include <bits/stdc++.h>
using namespace std;

#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e5 + 5; // Adjusted to avoid excessive memory usage

int n, m, timer;
vector<vector<int>> graph;
vector<pair<int, int>> bridges;
vector<int> tin, low;
vector<bool> visited;

void dfs(int u, int parent)
{
    visited[u] = true;
    tin[u] = low[u] = ++timer;

    for (int v : graph[u])
    {
        if (v == parent)
            continue; // Ignore the edge to the parent node
        if (visited[v])
        {
            // Back edge
            low[u] = min(low[u], tin[v]);
        }
        else
        {
            // Forward edge
            dfs(v, u);
            low[u] = min(low[u], low[v]);

            if (low[v] > tin[u])
            {
                bridges.push_back({min(u, v), max(u, v)}); // Store the bridge
            }
        }
    }
}

void findBridges()
{
    timer = 0;
    tin.assign(n + 1, -1);
    low.assign(n + 1, -1);
    visited.assign(n + 1, false);
    bridges.clear();

    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            dfs(i, -1);
        }
    }
}

void testCase()
{
    cin >> n >> m;
    graph.assign(n + 1, vector<int>());

    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    findBridges();
    sort(bridges.begin(), bridges.end());

    for (auto edge : bridges)
    {
        cout << edge.first << " " << edge.second << " ";
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
