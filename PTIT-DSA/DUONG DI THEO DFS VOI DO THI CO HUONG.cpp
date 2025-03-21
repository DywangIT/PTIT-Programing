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

void dfs(int s)
{
    stack<int> st;
    st.push(s);
    vector<bool> vis(n + 1, false);
    while (!st.empty())
    {
        int curPos = st.top();
        st.pop();
        vis[curPos] = true;
        if (curPos == t)
            return;

        for (auto x : graph[curPos])
        {
            if (!vis[x])
            {
                st.push(curPos);
                st.push(x);
                trace[x] = curPos;
                break;
            }
        }
    }
}

void testCase()
{
    cin >> n >> m >> s >> t;
    graph.clear();
    graph.resize(n + 1);
    trace.assign(n + 1, 0);
    while (m--)
    {
        cin >> u >> v;
        graph[u].push_back(v);
    }
    dfs(s);
    if (trace[t] == 0)
    {
        cout << -1;
        return;
    }
    stack<int> path;
    int last = t;
    while (last != 0)
    {
        path.push(last);
        last = trace[last];
    }
    while (!path.empty())
    {
        cout << path.top() << " ";
        path.pop();
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
