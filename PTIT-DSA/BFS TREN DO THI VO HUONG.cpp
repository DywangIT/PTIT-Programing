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

void bfs(int start, vector<int> &vis, vector<int> &path)
{
    queue<int> q;
    q.push(start);
    vis[start] = true;
    path.push_back(start);
    while (!q.empty())
    {
        int pos = q.front();
        q.pop();
        for (int x : graph[pos])
        {
            if (!vis[x])
            {
                vis[x] = true;
                path.push_back(x);
                q.push(x);
            }
        }
    }
}

void testCase()
{
    cin >> n >> edge >> start;
    graph.assign(n + 1, vector<int>());
    for (int i = 1; i <= edge; i++)
    {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    vector<int> path, vis(n + 1, 0);
    bfs(start, vis, path);
    for (int x : path)
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
