#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e6 + 5;

int n, edge, start;
vector<vector<int>> graph;

void dfs(int u, vector<bool> &vis, vector<int> &path) {
    vis[u] = true;
    path.push_back(u);
    for(int x : graph[u]) {
        if(!vis[x]) dfs(x, vis, path);
    }
}

void testCase()
{
    cin >> n >> edge >> start;
    graph.assign(n + 1, vector<int>());
    for(int i = 1; i <= edge; i++) {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    vector<bool> vis(n + 1, false);
    vector<int> path;
    dfs(start, vis, path);
    for(int x : path) cout << x << " ";
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
