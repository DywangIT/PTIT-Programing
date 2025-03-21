#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e6 + 5;

int n, m, u, v, s, t;
vector<vector<int>> graph;
vector<int> trace;

void bfs(int s)
{
    vector<bool> vis(n + 1, false);
    queue<int> q;
    q.push(s);
    vis[s] = true;

    while (!q.empty())
    {
        u = q.front();
        q.pop();
        if (u == t)
            return;
        for (auto x : graph[u])
        {
            if (!vis[x])
            {
                vis[x] = true;
                trace[x] = u;
                q.push(x);
            }
        }
    }
}

void testCase()
{
    cin >> n >> m >> s >> t;
    graph.assign(n + 1, vector<int>());
    while (m--)
    {
        cin >> u >> v;
        graph[u].push_back(v);
    }
    trace.assign(n + 1, 0);
    bfs(s);
    if (trace[t] == 0)
    {
        cout << -1;
        return;
    }
    vector<int> res;
    int last = t;
    while (last != 0)
    {
        res.push_back(last);
        last = trace[last];
    }
    reverse(res.begin(), res.end());
    for (auto x : res)
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
