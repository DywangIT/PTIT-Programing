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
    graph.assign(n + 1, vector<int>(n + 1, 0));

    for (int i = 1; i <= n; i++)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        int x;
        while (ss >> x)
        {
            graph[i][x] = 1;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << graph[i][j] << " ";
        }
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
    cout << endl;
    // }
    return 0;
}
