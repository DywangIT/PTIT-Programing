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
    cin.ignore();
    graph.assign(n + 1, vector<int>());

    for (int i = 1; i <= n; i++)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        int x;
        while (ss >> x)
        {
            graph[i].push_back(x);
        }
    }

    for (int i = 1; i <= n; i++)
    {
        sort(graph[i].begin(), graph[i].end());
        for (int x : graph[i])
        {
            if (x > i)
                cout << i << " " << x << endl;
        }
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
    cout << endl;
    // }
    return 0;
}
