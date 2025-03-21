#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e6 + 5;

int n, m, start;
vector<vector<int>> graph;

void bfs(int u, vector<bool> &vis, vector<int> &path)
{
    vis[u] = true;
    path.push_back(u);
    queue<int> q;
    q.push(u);
    while (!q.empty())
    {
        int pos = q.front();
        q.pop();
        for (auto x : graph[pos])
        {
            if (!vis[x])
            {
                vis[x] = true;
                q.push(x);
                path.push_back(x);
            }
        }
    }
}

void testCase()
{
    cin >> n >> m >> start;
    graph.assign(n + 1, vector<int>());
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
    }
    vector<bool> vis(n + 1);
    vector<int> path;
    bfs(start, vis, path);
    for (auto x : path)
        cout << x << " ";
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
